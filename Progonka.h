#include <iostream>
#include <cmath>
#include <vector>
#include <utility>

class Task {
private:
	int nodes; // Количество узлов
	std::vector<double> V; // Численное решение задачи
	std::vector<double> Phi; //Правая часть задачи


	std::vector<double> A, B, C; // Коэффициенты трёхдиагональной матрицы
	std::vector<double> alpha; // Параметр для прогонки
	std::vector<double> beta; // Параметр для прогонки
public:

	//Конструктор
	Task(int n) {
		resize(n);
	}

	void resize(int n) {
		nodes = n;
		// assign - функция, которая заменяет содержимое контейнера (например, вектора, списка или строки) новым набором значений
		V.assign(nodes, 0.0);
		Phi.assign(nodes, 0.0);
		A.assign(nodes, 0.0);
		B.assign(nodes, 0.0);
		C.assign(nodes, 0.0);
		alpha.assign(nodes, 0.0);
		beta.assign(nodes, 0.0);
	}

	// Передача правой части и коэффициентов задачи
	void setProgonka(const std::vector<double>& _A,
		const std::vector<double>& _B,
		const std::vector<double>& _C,
		const std::vector<double>& _Phi)
	{
		A = _A;
		B = _B;
		C = _C;
		Phi = _Phi;
	}

	const std::vector<double>& getV() const {
		return V;
	}

	// Нормализация крайних уравнений
	void normalization() {
		B[0] /= C[0];
		Phi[0] /= C[0];
		C[0] = 1.0;

		A[nodes - 1] /= C[nodes - 1];
		Phi[nodes - 1] /= C[nodes - 1];
		C[nodes - 1] = 1.0;
	}

	// Прямой ход прогонки (Сомневаюсь в правильности)
	void progonkaDirect() {

		alpha[1] = -B[0];
		beta[1] = Phi[0];

		for (int i = 1; i < nodes - 1; i++) {
			double denom = -C[i] - alpha[i] * A[i];
			alpha[i + 1] = B[i] / denom;
			beta[i + 1] = (-Phi[i] + A[i] * beta[i]) / denom;
		}
	}
	// Обратный ход прогонки (Сомневаюсь в правильности)
	void progonkaReverse() {
		V[nodes - 1] = (A[nodes - 1] * beta[nodes - 1] - Phi[nodes - 1]) / (-A[nodes - 1] * alpha[nodes - 1] - 1.0);
		for (int i = nodes - 2; i >= 0; i--) {
			V[i] = alpha[i + 1] * V[i + 1] + beta[i + 1];
		}
	}
	// обе прогонки вместе
	void progonka() {
		progonkaDirect();
		progonkaReverse();
	}
};

class TestTask {
public:
	int nodes;
	double k1 = 1.4;
	double k2 = 0.4;
	double f1 = 0.4;
	double f2 = std::exp(-0.4);
	double q1 = 0.4;
	double q2 = 0.16;
	double xi = 0.4;
	double mu1 = 0.0;
	double mu2 = 1.0;

	// сделал константы точнее
	const double C1 = 0.060557222867;
	const double C2 = -1.060557222867;
	const double C3 = -0.472024550734;
	const double C4 = -4.331084823580;

	TestTask(int N) : nodes(N) {}

	// --- Функции коэффициентов ---
	double a(double x, double h) {
		if (xi >= x)
			return k1;
		else if (xi <= x - h)
			return k2;
		else
			return 1.0 / (1.0 / h * ((xi - (x - h)) / k1 + (x - xi) / k2));
	}

	double d(double x, double h) {
		if (xi >= x + h / 2.0)
			return q1;
		else if (xi <= x - h / 2.0)
			return q2;
		else
			return (1.0 / h) * (q1 * (xi - (x - h / 2.0)) + q2 * (x + h / 2.0 - xi));
	}

	double phi(double x, double h) {
		if (xi >= x + h / 2.0)
			return f1;
		else if (xi <= x - h / 2.0)
			return f2;
		else
			return (1.0 / h) * (f1 * (xi - (x - h / 2.0)) + f2 * (x + h / 2.0 - xi));
	}

	/*
	series — сюда записываются вычисленные значения V для каждого узла.
	seriesTrue — сюда записываются точные значения u(x) для сравнения.

	raz — массив ошибок(разница между точным решением и вычисленным).

	table — матрица, которая будет содержать всю информацию по узлам : индекс, x, точное значение, вычисленное, ошибка.*/

	std::vector<std::vector<double>> calculate()
	{
		std::vector<std::pair<double, double>> series;
		std::vector<std::pair<double, double>> seriesTrue;
		std::vector<std::pair<double, double>> raz;
		std::vector<std::vector<double>> table;
		double x = 0.0;
		double h = 1.0 / (nodes - 1);

		std::vector<double> A(nodes, 0.0);
		std::vector<double> B(nodes, 0.0);
		std::vector<double> C(nodes, 0.0);
		std::vector<double> Phi(nodes, 0.0);
		std::vector<double> V(nodes, 0.0);

		//Граничные условия
		C[0] = 1.0; A[0] = 0.0; B[0] = 0.0; Phi[0] = mu1;
		C[nodes - 1] = 1.0; A[nodes - 1] = 0.0; B[nodes - 1] = 0.0; Phi[nodes - 1] = mu2;

		// Инициализация таблицы (nodes x 5) nodes-количество строк, 5 - количество столбцов(индекс узла, коорд х, точное решение u(x), численное решение v(x), разница)
		table.assign(nodes, std::vector<double>(5, 0.0));

		// Заполнение коэффициентов для внутреннего узла
		for (int i = 1; i < nodes - 1; i++) {
			x += h;
			A[i] = a(x, h) / (h * h);
			C[i] = -((a(x, h) + a(x + h, h)) / (h * h) + d(x, h));
			B[i] = a(x + h, h) / (h * h);
			Phi[i] = -phi(x, h);
		}

		// Решение системы методом прогонки
		Task task1(nodes);
		task1.setProgonka(A, B, C, Phi);
		task1.progonka();
		V = task1.getV();


		// Заранее посчитаем параметры лямбда
		double lam1 = std::sqrt(q1 / k1);
		double lam2 = std::sqrt(q2 / k2);

		// Инициализация серии
		// тут вместо 1.0 поставил mu1
		series.emplace_back(0.0, mu1);
		seriesTrue.emplace_back(0.0, mu1);
		raz.emplace_back(0.0, 0.0);


		// Заполняем таблицу для первого узла
		table[0][0] = 0; // индекс
		table[0][1] = 0.0; // x 
		table[0][2] = mu1;     // аналитическое
		table[0][3] = V[0];    // вычисленное
		table[0][4] = 0.0; // ошибка
		x = 0.0;
		double u = 0.0;

		// --- Заполнение остальных узлов ---
		for (int i = 1; i < nodes; i++) {
			x += h;

			// --- аналитическое решение ---
			/*if (i == nodes - 1)
				u = 0;*/
			if (x <= xi)
				// вот тут вот эти лямбды и пригодились
				// u = C1 * std::exp(-std::sqrt(2.0 / 7.0) * x) + C2 * std::exp(+std::sqrt(2.0 / 7.0) * x) + 1.0;
				u = C1 * std::exp(lam1 * x) + C2 * std::exp(-lam1 * x) + f1 / q1;
			else
				//u = C3 * std::exp(-std::sqrt(2.0 / 5.0) * x) + C4 * std::exp(+std::sqrt(2.0 / 5.0) * x) + std::exp(-0.4)/0.16;
				u = C3 * std::exp(lam2 * x) + C4 * std::exp(-lam2 * x) + f2 / q2;

			series.emplace_back(x, V[i]);
			seriesTrue.emplace_back(x, u);

			double error = std::abs(u - V[i]);
			table[i][0] = i;
			table[i][1] = x;
			table[i][2] = u;
			table[i][3] = V[i];
			table[i][4] = error;
			raz.emplace_back(x, error);
		}

		return table;
		// return raz;
	}
};


// ==========================================
// СТАРЫЙ ЗККОММЕНТИРОВАННЫЙ КЛАСС (ОСТАВЛЯЕМ ДЛЯ ИСТОРИИ)
// ==========================================

/*class TestTask {
public:
	int nodes;
	double k1 = 1.4;
	double k2 = 0.4;
	double f1 = 0.4;
	double f2 = std::exp(-0.4);
	double q1 = 0.4;
	double q2 = 0.16;
	double xi = 0.4;
	double mu1 = 0.0;
	double mu2 = 1.0;

	// --- КОНСТАНТЫ АНАЛИТИЧЕСКОГО РЕШЕНИЯ ---
	//const double C1 = -1.06013088;
	//const double C2 = 0.06013088;
	//const double C3 = -4.33553141;
	//const double C4 = -0.47148396;

	// МЕНЯЮ
	//const double C1 = -1.06011088;
	//const double C2 = 0.06019088;
	//const double C3 = -4.33550141;
	//const double C4 = -0.47048096;

	// --- ТОЧНЫЕ КОНСТАНТЫ (посчитаны аналитически) ---
	const double C1 = -1.0575338692742136;
	const double C2 = 0.0575338692742136;
	// (В сумме C1+C2 дают -1.0, всё верно)

	const double C3 = -4.3312781443574343;
	const double C4 = -0.4721598218175402;

	TestTask(int N) : nodes(N) {}

	double a(double x, double h) {
		if (xi >= x)
			return k1;
		else if (xi <= x - h)
			return k2;
		else
			return 1.0 / (1.0 / h * ((xi - (x - h)) / k1 + (x - xi) / k2));
	}

	double d(double x, double h) {
		if (xi >= x + h / 2.0)
			return q1;
		else if (xi <= x - h / 2.0)
			return q2;
		else
			return (1.0 / h) * (q1 * (xi - (x - h / 2.0)) + q2 * (x + h / 2.0 - xi));
	}

	double phi(double x, double h) {
		if (xi >= x + h / 2.0)
			return f1;
		else if (xi <= x - h / 2.0)
			return f2;
		else
			return (1.0 / h) * (f1 * (xi - (x - h / 2.0)) + f2 * (x + h / 2.0 - xi));
	}

	/*
	series — сюда записываются вычисленные значения V для каждого узла.
	seriesTrue — сюда записываются точные значения u(x) для сравнения.

	raz — массив ошибок(разница между точным решением и вычисленным).

	table — матрица, которая будет содержать всю информацию по узлам : индекс, x, точное значение, вычисленное, ошибка.*/

	/*
		std::vector<std::vector<double>> calculate()
		{
			std::vector<std::pair<double, double>> series;
			std::vector<std::pair<double, double>> seriesTrue;
			std::vector<std::pair<double, double>> raz;
			std::vector<std::vector<double>> table;
			double x = 0.0;
			double h = 1.0 / (nodes - 1);

			std::vector<double> A(nodes, 0.0);
			std::vector<double> B(nodes, 0.0);
			std::vector<double> C(nodes, 0.0);
			std::vector<double> Phi(nodes, 0.0);
			std::vector<double> V(nodes, 0.0);

			//Граничные условия
			C[0] = 1.0; A[0] = 0.0; B[0] = 0.0; Phi[0] = mu1;

			C[nodes - 1] = 1.0; A[nodes - 1] = 0.0; B[nodes - 1] = 0.0;
			Phi[nodes - 1] = mu2;

			// Инициализация таблицы (nodes x 5) nodes-количество строк, 5 - количество столбцов(индекс узла, коорд х, точное решение u(x), численное решение v(x), разница)
			table.assign(nodes, std::vector<double>(5, 0.0));

			// Заполнение коэффициентов для внутреннего узла
			for (int i = 1; i < nodes - 1; i++) {
				x += h;
				// Твои функции a, d, phi (предполагаем, что они есть в классе)
				double val_a = this->a(x, h);
				double val_a_next = this->a(x + h, h);

				A[i] = val_a / (h * h);
				C[i] = -((val_a + val_a_next) / (h * h) + this->d(x, h));
				B[i] = val_a_next / (h * h);
				Phi[i] = -this->phi(x, h);
			}

			// Решение системы методом прогонки
			Task task1(nodes);
			task1.setProgonka(A, B, C, Phi);
			task1.progonka();
			V = task1.getV();


			// Заполнение таблиц
			double u = 0.0;
			double lam1 = std::sqrt(q1 / k1); // Пересчитаем локально для формулы
			double lam2 = std::sqrt(q2 / k2);

			for (int i = 0; i < nodes; i++) {
				double current_x = i * h;

				// Точное аналитическое решение с нашими новыми C1..C4
				if (current_x <= xi + 1e-9) // +1e-9 для надежности сравнения float
					u = C1 * std::exp(lam1 * current_x) + C2 * std::exp(-lam1 * current_x) + f1 / q1;
				else
					u = C3 * std::exp(lam2 * current_x) + C4 * std::exp(-lam2 * current_x) + f2 / q2;

				double error = std::abs(u - V[i]);

				// Запись в таблицу
				table[i][0] = i;
				table[i][1] = current_x;
				table[i][2] = u;
				table[i][3] = V[i];
				table[i][4] = error;
			}
			return table;
		}
	};
	*/

class MainTask {
public:
	int nodes;
	double xi;
	double mu1, mu2;

	MainTask(int _nodes) : nodes(_nodes), xi(0.4), mu1(0.0), mu2(1.0) {}

	// --- Функции коэффициентов и правой части ---
	double k1(double x) { return x + 1.0; }
	double k2(double x) { return x; }
	double q1(double x) { return x; }
	double q2(double x) { return x * x; }
	double f1(double x) { return x; }
	double f2(double x) { return std::exp(-x); }

	// Коэффициент "a" для внутреннего узла
	double a(double x, double h) {
		if (xi >= x)
			return k1(x - h / 2.0);
		else if (xi <= x - h)
			return k2(x - h / 2.0);
		else
			return 1.0 / ((1.0 / h) * ((xi - (x - h)) / (k1((x - h + xi) / 2.0)) + (x - xi) / (k2((xi + x) / 2.0))));
	}

	// Коэффициент "d" для внутреннего узла
	double d(double x, double h) {
		if (xi >= x + h / 2.0)
			return q1(x);
		else if (xi <= x - h / 2.0)
			return q2(x);
		else
			return (1.0 / h) * (q1((xi + (x - h / 2.0)) / 2.0) * (xi - (x - h / 2.0))
				+ q2((xi + x + h / 2.0) / 2.0) * (x + h / 2.0 - xi));
	}

	// Правая часть задачи
	double phi(double x, double h) {
		if (xi >= x + h / 2.0)
			return f1(x);
		else if (xi <= x - h / 2.0)
			return f2(x);
		else
			return (1.0 / h) * (f1((xi + (x - h / 2.0)) / 2.0) * (xi - (x - h / 2.0))
				+ f2((xi + x + h / 2.0) / 2.0) * (x + h / 2.0 - xi));
	}

	// --- Основная функция решения ---
	std::vector<std::pair<double, double>> calculate(std::vector<std::pair<double, double>>& series,
		std::vector<std::pair<double, double>>& series2,
		std::vector<std::pair<double, double>>& raz,
		std::vector<std::vector<double>>& table)
	{
		// nodes2 — это количество узлов в более плотной сетке, которая нужна для оценки точности или сходимости
		double h = 1.0 / (nodes - 1);
		int nodes2 = nodes * 2 - 1;
		double h2 = 1.0 / (nodes2 - 1);
		std::vector<double> A(nodes, 0.0), B(nodes, 0.0), C(nodes, 0.0), Phi(nodes, 0.0), V(nodes, 0.0);
		std::vector<double> A2(nodes2, 0.0), B2(nodes2, 0.0), C2(nodes2, 0.0), Phi2(nodes2, 0.0), V2(nodes2, 0.0);

		// --- Граничные условия ---
		C[0] = C2[0] = 1.0;
		A[0] = A2[0] = 0.0;
		B[0] = B2[0] = 0.0;
		Phi[0] = Phi2[0] = mu1;
		C[nodes - 1] = C2[nodes2 - 1] = 1.0;
		A[nodes - 1] = A2[nodes2 - 1] = 0.0;
		B[nodes - 1] = B2[nodes2 - 1] = 0.0;
		Phi[nodes - 1] = Phi2[nodes2 - 1] = mu2;

		// --- Заполнение коэффициентов для внутренних узлов ---
		double x = 0.0;
		for (int i = 1; i < nodes - 1; i++) {
			x += h;
			A[i] = a(x, h) / (h * h);
			C[i] = -((a(x, h) + a(x + h, h)) / (h * h) + d(x, h));
			B[i] = a(x + h, h) / (h * h);
			Phi[i] = -phi(x, h);
		}

		double x2 = 0.0;
		for (int i = 1; i < nodes2 - 1; i++) {
			x2 += h2;
			A2[i] = a(x2, h2) / (h2 * h2);
			C2[i] = -((a(x2, h2) + a(x2 + h2, h2)) / (h2 * h2) + d(x2, h2));
			B2[i] = a(x2 + h2, h2) / (h2 * h2);
			Phi2[i] = -phi(x2, h2);
		}

		// --- Решение системы методом прогонки ---
		Task task1(nodes), task2(nodes2);
		task1.setProgonka(A, B, C, Phi); task1.progonka(); V = task1.getV();
		task2.setProgonka(A2, B2, C2, Phi2); task2.progonka(); V2 = task2.getV();

		// --- Заполнение серий ---
		series.push_back({ 0.0, mu1 });
		for (int i = 1; i < nodes; i++) {
			series.push_back({ i * h, V[i] });
		}

		series2.push_back({ 0.0, mu1 });
		for (int i = 1; i < nodes2; i += 2) { // берём каждый второй узел
			series2.push_back({ i * h2, V2[i] });
		}
		// --- Ошибки и таблица ---
		raz.clear();
		for (int i = 0; i < nodes; i++) {
			double error = std::abs(V2[2 * i] - V[i]);
			raz.push_back({ i * h, error });

			if (table.size() < nodes) table.resize(nodes, std::vector<double>(5, 0.0));
			table[i][0] = i;
			table[i][1] = i * h;
			table[i][2] = V[i];      // можно сюда вставить аналитическое решение, если нужно
			table[i][3] = V2[2 * i];
			table[i][4] = error;
		}

		return raz;
	}
};