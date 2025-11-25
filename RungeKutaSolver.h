// RungeKuttaSolver.h
#pragma once

#include <vector>
#include <cmath>

namespace Graph {

    public ref class RungeKuttaSolver
    {
    private:
        double m, c, k;

        array<double>^ SystemODE(double t, array<double>^ y)
        {
            double y1 = y[0];
            double y2 = y[1];

            array<double>^ dydt = gcnew array<double>(2);
            dydt[0] = y2;  // y1' = y2
            dydt[1] = (-c * y2 - k * y1) / m;  // y2' = (-c*y2 - k*y1)/m

            return dydt;
        }

        array<double>^ AddVectors(array<double>^ a, array<double>^ b, double scale)
        {
            array<double>^ result = gcnew array<double>(a->Length);
            for (int i = 0; i < a->Length; i++)
            {
                result[i] = a[i] + scale * b[i];
            }
            return result;
        }

    public:
        RungeKuttaSolver(double mass, double damping, double stiffness)
            : m(mass), c(damping), k(stiffness)
        {
        }

        /// <summary>
        /// Решение уравнения m*u'' + c*u' + k*u = 0 методом Рунге-Кутты 4-го порядка
        /// </summary>
        /// <param name="u0">Начальное положение</param>
        /// <param name="u0_prime">Начальная скорость</param>
        /// <param name="t0">Начальное время</param>
        /// <param name="t_end">Конечное время</param>
        /// <param name="h">Шаг интегрирования</param>
        /// <returns>Кортеж (t_values, u_values, u_prime_values)</returns>
        System::Tuple<
            System::Collections::Generic::List<double>^,
            System::Collections::Generic::List<double>^,
            System::Collections::Generic::List<double>^>^
            RungeKutta4thOrder(double u0, double u0_prime, double t0, double t_end, double h)
        {
            // Проверка входных параметров
            if (m <= 0)
                throw gcnew System::ArgumentException("Масса должна быть положительной");
            if (h <= 0)
                throw gcnew System::ArgumentException("Шаг должен быть положительным");
            if (t_end <= t0)
                throw gcnew System::ArgumentException("Конечное время должно быть больше начального");

            // Инициализация массивов результатов
            auto t_values = gcnew System::Collections::Generic::List<double>();
            auto u_values = gcnew System::Collections::Generic::List<double>();
            auto u_prime_values = gcnew System::Collections::Generic::List<double>();

            // Количество шагов
            int n_steps = (int)((t_end - t0) / h) + 1;

            // Начальные условия
            array<double>^ y = gcnew array<double> { u0, u0_prime };
            double t_current = t0;

            // Сохраняем начальные условия
            t_values->Add(t_current);
            u_values->Add(y[0]);
            u_prime_values->Add(y[1]);

            // Основной цикл интегрирования
            for (int i = 1; i < n_steps; i++)
            {
                // Коэффициенты метода Рунге-Кутты 4-го порядка
                array<double>^ k1 = SystemODE(t_current, y);
                array<double>^ k2 = SystemODE(t_current + h / 2.0, AddVectors(y, k1, h / 2.0));
                array<double>^ k3 = SystemODE(t_current + h / 2.0, AddVectors(y, k2, h / 2.0));
                array<double>^ k4 = SystemODE(t_current + h, AddVectors(y, k3, h));

                // Вычисление нового значения
                for (int j = 0; j < y->Length; j++)
                {
                    y[j] = y[j] + h / 6.0 * (k1[j] + 2.0 * k2[j] + 2.0 * k3[j] + k4[j]);
                }

                t_current = t0 + i * h;

                // Сохраняем результаты
                t_values->Add(t_current);
                u_values->Add(y[0]);
                u_prime_values->Add(y[1]);
            }

            return System::Tuple::Create(t_values, u_values, u_prime_values);
        }

        /// <summary>
        /// Упрощенная версия метода для получения только решения u(t)
        /// </summary>
        array<double>^ Solve(double u0, double u0_prime, double t0, double t_end, double h)
        {
            auto result = RungeKutta4thOrder(u0, u0_prime, t0, t_end, h);
            return result->Item2->ToArray();
        }

        /// <summary>
        /// Получение полных результатов в виде массива массивов
        /// </summary>
        array<array<double>^>^ SolveFull(double u0, double u0_prime, double t0, double t_end, double h)
        {
            auto result = RungeKutta4thOrder(u0, u0_prime, t0, t_end, h);

            array<array<double>^>^ fullResult = gcnew array<array<double>^>(3);
            fullResult[0] = result->Item1->ToArray();  // t_values
            fullResult[1] = result->Item2->ToArray();  // u_values  
            fullResult[2] = result->Item3->ToArray();  // u_prime_values

            return fullResult;
        }
    };
}