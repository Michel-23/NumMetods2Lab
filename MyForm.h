#pragma once
#include <math.h>

#include "Progonka.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			testTask = new TestTask(1000);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			if (testTask != nullptr) {
				delete testTask;
				testTask = nullptr;
			}
		}

	private: int task = 1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;

	TestTask* testTask;






	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ cbControlLocalError;
	private: System::Windows::Forms::TextBox^ tbX0;
	private: System::Windows::Forms::TextBox^ tbEpsilon;
	private: System::Windows::Forms::TextBox^ tbB;
	private: System::Windows::Forms::TextBox^ tbMaxEpsilon;
	private: System::Windows::Forms::TextBox^ tbNMax;
	private: System::Windows::Forms::TextBox^ tbA;
	private: System::Windows::Forms::TextBox^ tbH;
	private: System::Windows::Forms::TextBox^ tbU1;
	private: System::Windows::Forms::TextBox^ tbU0;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;












	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::Button^ launch;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ scaleY1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ scaleY0;
	private: System::Windows::Forms::TextBox^ scaleX1;
	private: System::Windows::Forms::TextBox^ scaleX0;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;











	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ vi;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2i;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridView^ dataGridView3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;

























































































































	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->launch = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->scaleY1 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->scaleY0 = (gcnew System::Windows::Forms::TextBox());
			this->scaleX1 = (gcnew System::Windows::Forms::TextBox());
			this->scaleX0 = (gcnew System::Windows::Forms::TextBox());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->xi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->cbControlLocalError = (gcnew System::Windows::Forms::CheckBox());
			this->tbX0 = (gcnew System::Windows::Forms::TextBox());
			this->tbEpsilon = (gcnew System::Windows::Forms::TextBox());
			this->tbB = (gcnew System::Windows::Forms::TextBox());
			this->tbMaxEpsilon = (gcnew System::Windows::Forms::TextBox());
			this->tbNMax = (gcnew System::Windows::Forms::TextBox());
			this->tbA = (gcnew System::Windows::Forms::TextBox());
			this->tbH = (gcnew System::Windows::Forms::TextBox());
			this->tbU1 = (gcnew System::Windows::Forms::TextBox());
			this->tbU0 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tableLayoutPanel1);
			this->tabPage2->Controls->Add(this->launch);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->scaleY1);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->scaleY0);
			this->tabPage2->Controls->Add(this->scaleX1);
			this->tabPage2->Controls->Add(this->scaleX0);
			this->tabPage2->Controls->Add(this->reset);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1136, 627);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->zedGraphControl3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->zedGraphControl2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->zedGraphControl1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(228, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(905, 621);
			this->tableLayoutPanel1->TabIndex = 11;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->zedGraphControl3->IsAutoScrollRange = true;
			this->zedGraphControl3->IsShowPointValues = true;
			this->zedGraphControl3->IsSynchronizeXAxes = true;
			this->zedGraphControl3->IsSynchronizeYAxes = true;
			this->zedGraphControl3->Location = System::Drawing::Point(4, 314);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(444, 303);
			this->zedGraphControl3->TabIndex = 3;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->zedGraphControl2->IsAutoScrollRange = true;
			this->zedGraphControl2->IsShowPointValues = true;
			this->zedGraphControl2->IsSynchronizeXAxes = true;
			this->zedGraphControl2->IsSynchronizeYAxes = true;
			this->zedGraphControl2->Location = System::Drawing::Point(456, 4);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(445, 302);
			this->zedGraphControl2->TabIndex = 2;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->zedGraphControl1->IsAutoScrollRange = true;
			this->zedGraphControl1->IsShowPointValues = true;
			this->zedGraphControl1->IsSynchronizeXAxes = true;
			this->zedGraphControl1->IsSynchronizeYAxes = true;
			this->zedGraphControl1->Location = System::Drawing::Point(4, 4);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(444, 302);
			this->zedGraphControl1->TabIndex = 1;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(455, 313);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(447, 305);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// launch
			// 
			this->launch->Location = System::Drawing::Point(41, 279);
			this->launch->Name = L"launch";
			this->launch->Size = System::Drawing::Size(146, 81);
			this->launch->TabIndex = 10;
			this->launch->Text = L"Запустить с установленными значениями";
			this->launch->UseVisualStyleBackColor = true;
			this->launch->Click += gcnew System::EventHandler(this, &MyForm::launch_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 226);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(97, 16);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Масштаб по y:";
			// 
			// scaleY1
			// 
			this->scaleY1->Location = System::Drawing::Point(122, 238);
			this->scaleY1->Name = L"scaleY1";
			this->scaleY1->Size = System::Drawing::Size(100, 22);
			this->scaleY1->TabIndex = 8;
			this->scaleY1->Text = L"1";
			this->scaleY1->TextChanged += gcnew System::EventHandler(this, &MyForm::scaleY1_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 170);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 16);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Масштаб по x:";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click_1);
			// 
			// scaleY0
			// 
			this->scaleY0->Location = System::Drawing::Point(122, 210);
			this->scaleY0->Name = L"scaleY0";
			this->scaleY0->Size = System::Drawing::Size(100, 22);
			this->scaleY0->TabIndex = 7;
			this->scaleY0->Text = L"0";
			this->scaleY0->TextChanged += gcnew System::EventHandler(this, &MyForm::scaleY0_TextChanged);
			// 
			// scaleX1
			// 
			this->scaleX1->Location = System::Drawing::Point(122, 180);
			this->scaleX1->Name = L"scaleX1";
			this->scaleX1->Size = System::Drawing::Size(100, 22);
			this->scaleX1->TabIndex = 2;
			this->scaleX1->Text = L"1";
			this->scaleX1->TextChanged += gcnew System::EventHandler(this, &MyForm::scaleX1_TextChanged_1);
			// 
			// scaleX0
			// 
			this->scaleX0->Location = System::Drawing::Point(122, 152);
			this->scaleX0->Name = L"scaleX0";
			this->scaleX0->Size = System::Drawing::Size(100, 22);
			this->scaleX0->TabIndex = 1;
			this->scaleX0->Text = L"0";
			this->scaleX0->TextChanged += gcnew System::EventHandler(this, &MyForm::scaleX0_TextChanged_1);
			// 
			// reset
			// 
			this->reset->Location = System::Drawing::Point(41, 379);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(146, 78);
			this->reset->TabIndex = 5;
			this->reset->Text = L"Сбросить масштаб";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &MyForm::reset_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->cbControlLocalError);
			this->tabPage1->Controls->Add(this->tbX0);
			this->tabPage1->Controls->Add(this->tbEpsilon);
			this->tabPage1->Controls->Add(this->tbB);
			this->tabPage1->Controls->Add(this->tbMaxEpsilon);
			this->tabPage1->Controls->Add(this->tbNMax);
			this->tabPage1->Controls->Add(this->tbA);
			this->tabPage1->Controls->Add(this->tbH);
			this->tabPage1->Controls->Add(this->tbU1);
			this->tabPage1->Controls->Add(this->tbU0);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1136, 627);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Таблица";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// tabControl2
			// 
			this->tabControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(3, 235);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(1127, 384);
			this->tabControl2->TabIndex = 26;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1119, 355);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Таблица 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->xi, this->vi,
					this->v2i, this->Column3, this->Column4
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(1113, 349);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			// 
			// xi
			// 
			this->xi->HeaderText = L"i";
			this->xi->MinimumWidth = 8;
			this->xi->Name = L"xi";
			this->xi->ReadOnly = true;
			this->xi->Width = 125;
			// 
			// vi
			// 
			this->vi->HeaderText = L"xi";
			this->vi->MinimumWidth = 8;
			this->vi->Name = L"vi";
			this->vi->ReadOnly = true;
			this->vi->Width = 250;
			// 
			// v2i
			// 
			this->v2i->HeaderText = L"u_i";
			this->v2i->MinimumWidth = 8;
			this->v2i->Name = L"v2i";
			this->v2i->ReadOnly = true;
			this->v2i->Width = 250;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"v_i";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 250;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"u_i-v_i";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 250;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1119, 355);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Таблица 2";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(1113, 349);
			this->dataGridView2->TabIndex = 4;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"xi";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 250;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"u_i";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 250;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"v_i";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 250;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"u_i-v_i";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 250;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView3);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1119, 355);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Таблица 3";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->Location = System::Drawing::Point(3, 3);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 62;
			this->dataGridView3->Size = System::Drawing::Size(1113, 349);
			this->dataGridView3->TabIndex = 5;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick);
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"i";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"xi";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 250;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"u_i";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 250;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"v_i";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 250;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"u_i-v_i";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 250;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(839, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 36);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Основная задача №2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// cbControlLocalError
			// 
			this->cbControlLocalError->AutoSize = true;
			this->cbControlLocalError->Location = System::Drawing::Point(441, 34);
			this->cbControlLocalError->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbControlLocalError->Name = L"cbControlLocalError";
			this->cbControlLocalError->Size = System::Drawing::Size(252, 20);
			this->cbControlLocalError->TabIndex = 24;
			this->cbControlLocalError->Text = L"Контроль локальной погрешности";
			this->cbControlLocalError->UseVisualStyleBackColor = true;
			this->cbControlLocalError->CheckedChanged += gcnew System::EventHandler(this, &MyForm::cbControlLocalError_CheckedChanged);
			// 
			// tbX0
			// 
			this->tbX0->Location = System::Drawing::Point(82, 173);
			this->tbX0->Name = L"tbX0";
			this->tbX0->Size = System::Drawing::Size(63, 22);
			this->tbX0->TabIndex = 23;
			this->tbX0->Text = L"0";
			this->tbX0->TextChanged += gcnew System::EventHandler(this, &MyForm::scaleX1_TextChanged);
			// 
			// tbEpsilon
			// 
			this->tbEpsilon->Location = System::Drawing::Point(452, 117);
			this->tbEpsilon->Name = L"tbEpsilon";
			this->tbEpsilon->Size = System::Drawing::Size(67, 22);
			this->tbEpsilon->TabIndex = 22;
			this->tbEpsilon->Text = L"0,001";
			this->tbEpsilon->TextChanged += gcnew System::EventHandler(this, &MyForm::scaleX0_TextChanged);
			// 
			// tbB
			// 
			this->tbB->Location = System::Drawing::Point(977, 117);
			this->tbB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbB->Name = L"tbB";
			this->tbB->Size = System::Drawing::Size(89, 22);
			this->tbB->TabIndex = 17;
			this->tbB->Text = L"20";
			this->tbB->TextChanged += gcnew System::EventHandler(this, &MyForm::tbH_TextChanged);
			// 
			// tbMaxEpsilon
			// 
			this->tbMaxEpsilon->Location = System::Drawing::Point(977, 81);
			this->tbMaxEpsilon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbMaxEpsilon->Name = L"tbMaxEpsilon";
			this->tbMaxEpsilon->Size = System::Drawing::Size(89, 22);
			this->tbMaxEpsilon->TabIndex = 17;
			this->tbMaxEpsilon->Text = L"0,00001";
			this->tbMaxEpsilon->TextChanged += gcnew System::EventHandler(this, &MyForm::tbTEnd_TextChanged);
			// 
			// tbNMax
			// 
			this->tbNMax->Location = System::Drawing::Point(977, 44);
			this->tbNMax->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbNMax->Name = L"tbNMax";
			this->tbNMax->Size = System::Drawing::Size(89, 22);
			this->tbNMax->TabIndex = 16;
			this->tbNMax->Text = L"1000";
			this->tbNMax->TextChanged += gcnew System::EventHandler(this, &MyForm::tbT0_TextChanged);
			// 
			// tbA
			// 
			this->tbA->Location = System::Drawing::Point(452, 77);
			this->tbA->Margin = System::Windows::Forms::Padding(4);
			this->tbA->Name = L"tbA";
			this->tbA->Size = System::Drawing::Size(63, 22);
			this->tbA->TabIndex = 4;
			this->tbA->Text = L"1";
			this->tbA->TextChanged += gcnew System::EventHandler(this, &MyForm::tbMass_TextChanged);
			// 
			// tbH
			// 
			this->tbH->Location = System::Drawing::Point(656, 77);
			this->tbH->Margin = System::Windows::Forms::Padding(4);
			this->tbH->Name = L"tbH";
			this->tbH->Size = System::Drawing::Size(80, 22);
			this->tbH->TabIndex = 8;
			this->tbH->Text = L"0,01";
			this->tbH->TextChanged += gcnew System::EventHandler(this, &MyForm::tbStiffness_TextChanged);
			// 
			// tbU1
			// 
			this->tbU1->Location = System::Drawing::Point(82, 121);
			this->tbU1->Margin = System::Windows::Forms::Padding(4);
			this->tbU1->Name = L"tbU1";
			this->tbU1->Size = System::Drawing::Size(64, 22);
			this->tbU1->TabIndex = 13;
			this->tbU1->Text = L"0";
			this->tbU1->TextChanged += gcnew System::EventHandler(this, &MyForm::tbU0Prime_TextChanged);
			// 
			// tbU0
			// 
			this->tbU0->Location = System::Drawing::Point(82, 75);
			this->tbU0->Margin = System::Windows::Forms::Padding(4);
			this->tbU0->Name = L"tbU0";
			this->tbU0->Size = System::Drawing::Size(63, 22);
			this->tbU0->TabIndex = 11;
			this->tbU0->Text = L"1";
			this->tbU0->TextChanged += gcnew System::EventHandler(this, &MyForm::tbU0_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(364, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Эпсилон:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(50, 173);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 16);
			this->label11->TabIndex = 18;
			this->label11->Text = L"x0:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(532, 193);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Основная задача №1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(218, 193);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Тестовая задача";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(851, 120);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(116, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Правая граница:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(559, 81);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h начальное:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(353, 75);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Параметр а:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(827, 84);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 16);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Эпсилон граничное:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(919, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"N max:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(50, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(141, 16);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Начальные условия:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(47, 75);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"u0:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 123);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"u1:";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1144, 656);
			this->tabControl1->TabIndex = 18;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 656);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		task = 1;
		SolveTask(1, false);
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	task = 2;
	SolveTask(2, false);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	task = 3;
	SolveTask(3, false);
}

private: System::Void cbControlLocalError_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	tbEpsilon->Enabled = cbControlLocalError->Checked;
}

private: void SolveTask(int Task, bool resetScale) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	GraphPane^ panel2 = zedGraphControl2->GraphPane;
	GraphPane^ panel3 = zedGraphControl3->GraphPane;

	panel->CurveList->Clear();
	panel2->CurveList->Clear();
	panel3->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	PointPairList^ exact_list = gcnew ZedGraph::PointPairList();
	PointPairList^ phase_list = gcnew ZedGraph::PointPairList();

	panel->CurveList->Clear();
	panel->GraphObjList->Clear();
	panel2->CurveList->Clear();
	panel2->GraphObjList->Clear();
	panel3->CurveList->Clear();
	panel3->GraphObjList->Clear();

	int N = System::Convert::ToInt32(tbNMax->Text);

	//double x0 = Convert::ToDouble(tbX0->Text);
	//double u0 = Convert::ToDouble(tbU0->Text);
	//double u1 = Convert::ToDouble(tbU1->Text);

	//double a = Convert::ToDouble(tbA->Text);
	//double right = Convert::ToDouble(tbB->Text);
	//double eps = Convert::ToDouble(tbEpsilon->Text);
	//double eps_gr = Convert::ToDouble(tbMaxEpsilon->Text);
	//double h0 = Convert::ToDouble(tbH->Text);
	//int N = System::Convert::ToInt32(tbNMax->Text);
	//bool controlLocalError = cbControlLocalError->Checked;
	//double xMin = Convert::ToDouble(scaleX0->Text);
	//double xMax = Convert::ToDouble(scaleX1->Text);
	//double yMin = Convert::ToDouble(scaleY0->Text);
	//double yMax = Convert::ToDouble(scaleY1->Text);

	TestTask* solverTest = new TestTask(N);

	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();

	if (Task == 1) {
		
		std::vector<std::vector<double>> result = solverTest->calculate();

		array<String^>^ columnNames1 = { "i", "x_i", "u_i", "v_i", "u_i - v_i" };
		array<String^>^ columnNames2 = { "n", "max|u_i - v_i|", "отношение" };
		array<String^>^ columnNames3 = { "n", "max|u_i - v_i|", "основная", "ln(n)", "-ln(E1)", "-ln(E2)"};

		for each(String ^ colName in columnNames1) {
			dataGridView1->Columns->Add(colName, colName);
		}
		for each (String ^ colName in columnNames2) {
			dataGridView2->Columns->Add(colName, colName);
		}
		for each (String ^ colName in columnNames3) {
			dataGridView3->Columns->Add(colName, colName);
		}

		// Заполнение таблицы и графиков для задачи 1
		for (int i = 0; i < result.size(); i++) {
			int rowIndex = dataGridView1->Rows->Add();

			// Каждый элемент result[i] соответствует своему столбцу
			dataGridView1->Rows[rowIndex]->Cells[0]->Value = result[i][0]; // i (индекс)
			dataGridView1->Rows[rowIndex]->Cells[1]->Value = result[i][1]; // x_i
			dataGridView1->Rows[rowIndex]->Cells[2]->Value = result[i][2]; // u_i (точное)
			dataGridView1->Rows[rowIndex]->Cells[3]->Value = result[i][3]; // v_i (численное)
			dataGridView1->Rows[rowIndex]->Cells[4]->Value = result[i][4]; // u_i - v_i
			
			//f1_list->Add(result.x_i[i], result.v_i[i]);
			//exact_list->Add(result.x_i[i], result.solution[i]);
		}

		for (int i = 0; i < result.size(); i ++) {

			int n = 1000;
			TestTask* solverTestN = new TestTask(n);
			std::vector<std::vector<double>> resultN = solverTestN->calculate();

			int rowIndex = dataGridView2->Rows->Add();

			double g = resultN.size();
			dataGridView2->Rows[rowIndex]->Cells[0]->Value = resultN[n][0]; // <- ошибка тут

			if (i == 0) {
				dataGridView2->Rows[rowIndex]->Cells[1]->Value = resultN[n][4];
			}
			else {
				double maxError1 = 0.0000000001;
				if (resultN[n- result.size() / 5][4] > maxError1) {
					maxError1 = resultN[n- result.size() / 5][4];
				}
				double maxError2 = 0.0000000001;
				if (resultN[n][4] > maxError2) {
					maxError2 = resultN[n][4];
				}

				dataGridView2->Rows[rowIndex]->Cells[1]->Value = maxError2;
				dataGridView2->Rows[rowIndex]->Cells[2]->Value = maxError2 / maxError1;
			}
		}


	}
	//else if (Task == 2) {

	//	if (controlLocalError) {
	//		array<String^>^ columnNames = {
	//		"i", "x_i", "v_i", "v_2i", "v_i - v_2i", "ОЛП", "h_i", "C1", "C2"
	//		};
	//		for each (String ^ colName in columnNames) {
	//			dataGridView1->Columns->Add(colName, colName);
	//		}
	//	}
	//	else {
	//		array<String^>^ columnNames = {
	//		"i", "x_i", "v_i", "v_2i", "v_i - v_2i", "h_i", "C1", "C2"
	//		};
	//		for each (String ^ colName in columnNames) {
	//			dataGridView1->Columns->Add(colName, colName);
	//		}
	//	}

	//	

	//	// Заполнение таблицы и графиков для задачи 2
	//	for (int i = 0; i < result.x_i.size(); i++) {
	//		int rowIndex = dataGridView1->Rows->Add();
	//		dataGridView1->Rows[rowIndex]->Cells[0]->Value = i;
	//		dataGridView1->Rows[rowIndex]->Cells[1]->Value = result.x_i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[2]->Value = result.v_i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[3]->Value = result.v_2i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[4]->Value = result.v_i_minus_v_2i[i];
	//		if (controlLocalError) {
	//			dataGridView1->Rows[rowIndex]->Cells[5]->Value = result.local_err[i];
	//			dataGridView1->Rows[rowIndex]->Cells[6]->Value = result.h_i[i];
	//			dataGridView1->Rows[rowIndex]->Cells[7]->Value = result.C1[i];
	//			dataGridView1->Rows[rowIndex]->Cells[8]->Value = result.C2[i];
	//		}
	//		else {
	//			dataGridView1->Rows[rowIndex]->Cells[5]->Value = result.h_i[i];
	//			dataGridView1->Rows[rowIndex]->Cells[6]->Value = result.C1[i];
	//			dataGridView1->Rows[rowIndex]->Cells[7]->Value = result.C2[i];
	//		}

	//		f1_list->Add(result.x_i[i], result.v_i[i]);
	//	}
	//}
	//else if (Task == 3) {
	//	if (controlLocalError) {
	//		array<String^>^ columnNames = {
	//		"i", "x_i", "v_i", "v_2i", "v_i - v_2i", "v1_i", "v1_2i", "v1_i - v1_2i", "ОЛП1", "ОЛП2", "h_i", "C1", "C2"
	//		};
	//		for each (String ^ colName in columnNames) {
	//			dataGridView1->Columns->Add(colName, colName);
	//		}
	//	}
	//	else {
	//		array<String^>^ columnNames = {
	//		"i", "x_i", "v_i", "v_2i", "v_i - v_2i", "v1_i", "v1_2i", "v1_i - v1_2i", "h_i", "C1", "C2"
	//		};
	//		for each (String ^ colName in columnNames) {
	//			dataGridView1->Columns->Add(colName, colName);
	//		}
	//	}

	//	// Заполнение таблицы и графиков для задачи 3
	//	for (int i = 0; i < result.x_i.size(); i++) {
	//		int rowIndex = dataGridView1->Rows->Add();
	//		dataGridView1->Rows[rowIndex]->Cells[0]->Value = i;
	//		dataGridView1->Rows[rowIndex]->Cells[1]->Value = result.x_i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[2]->Value = result.v_i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[3]->Value = result.v_2i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[4]->Value = result.v_i_minus_v_2i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[5]->Value = result.v1_i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[6]->Value = result.v1_2i[i];
	//		dataGridView1->Rows[rowIndex]->Cells[7]->Value = result.v1_i_minus_v1_2i[i];
	//		if (controlLocalError) {
	//			dataGridView1->Rows[rowIndex]->Cells[8]->Value = result.local_err[i];
	//			dataGridView1->Rows[rowIndex]->Cells[9]->Value = result.local_err1[i];
	//			dataGridView1->Rows[rowIndex]->Cells[10]->Value = result.h_i[i];
	//			dataGridView1->Rows[rowIndex]->Cells[11]->Value = result.C1[i];
	//			dataGridView1->Rows[rowIndex]->Cells[12]->Value = result.C2[i];
	//		}
	//		else {
	//			dataGridView1->Rows[rowIndex]->Cells[8]->Value = result.h_i[i];
	//			dataGridView1->Rows[rowIndex]->Cells[9]->Value = result.C1[i];
	//			dataGridView1->Rows[rowIndex]->Cells[10]->Value = result.C2[i];
	//		}

	//		f1_list->Add(result.x_i[i], result.v_i[i]);
	//		f2_list->Add(result.x_i[i], result.v1_i[i]);
	//	}
	//	for (int i = 0; i < result.x_i.size(); i++) {
	//		phase_list->Add(result.v_i[i], result.v1_i[i]);
	//	}
	//}

	//// Настройка графиков
	//if (Task == 7) {
	//	panel->Title->Text = "Тестовая задача. Точное и численное решение";
	//	panel->XAxis->Title->Text = "x";
	//	panel->YAxis->Title->Text = "u(x)";

	//	/*panel2->Title->Text = "Тестовая задача. Численное решение";
	//	panel2->XAxis->Title->Text = "x";
	//	panel2->YAxis->Title->Text = "u(x)";*/

	//	panel3->Title->Text = "Title";
	//	panel3->XAxis->Title->Text = "X Axis";
	//	panel3->YAxis->Title->Text = "Y Axis";

	//	panel->AddCurve("Точное решение", exact_list, Color::Red, SymbolType::None);
	//	panel->AddCurve("Численное решение", f1_list, Color::Blue, SymbolType::None);
	//}
	//else if (Task == 2) {
	//	panel->Title->Text = "Основная задача №1";
	//	panel->XAxis->Title->Text = "x";
	//	panel->YAxis->Title->Text = "u(x)";

	//	panel2->Title->Text = "Title";
	//	panel2->XAxis->Title->Text = "X Axis";
	//	panel2->YAxis->Title->Text = "Y Axis";

	//	panel3->Title->Text = "Title";
	//	panel3->XAxis->Title->Text = "X Axis";
	//	panel3->YAxis->Title->Text = "Y Axis";

	//	panel->AddCurve("Численное решение", f1_list, Color::Red, SymbolType::None);
	//}
	//else if (Task == 3) {
	//	panel->Title->Text = "Основная задача №2. U(x)";
	//	panel2->Title->Text = "Основная задача №2. U'(x)";
	//	panel3->Title->Text = "Основная задача №2. Фазовый портрет";
	//	panel->XAxis->Title->Text = "x";
	//	panel->YAxis->Title->Text = "u(x)";
	//	panel2->XAxis->Title->Text = "x";
	//	panel2->YAxis->Title->Text = "u'(x)";
	//	panel3->XAxis->Title->Text = "u(x)";
	//	panel3->YAxis->Title->Text = "u'(x)";

	//	panel->AddCurve("u(x)", f1_list, Color::Red, SymbolType::None);
	//	panel2->AddCurve("u'(x)", f2_list, Color::Red, SymbolType::None);
	//	panel3->AddCurve("u'(u)", phase_list, Color::Red, SymbolType::None);
	//}

	//panel->XAxis->Scale->Min = xMin;
	//panel->XAxis->Scale->Max = xMax;
	//panel->YAxis->Scale->Min = yMin;
	//panel->YAxis->Scale->Max = yMax;
	//panel2->XAxis->Scale->Min = xMin;
	//panel2->XAxis->Scale->Max = xMax;
	//panel2->YAxis->Scale->Min = yMin;
	//panel2->YAxis->Scale->Max = yMax;
	//panel3->XAxis->Scale->Min = xMin;
	//panel3->XAxis->Scale->Max = xMax;
	//panel3->YAxis->Scale->Min = yMin;
	//panel3->YAxis->Scale->Max = yMax;

	//zedGraphControl1->AxisChange();
	//zedGraphControl1->Invalidate();
	//zedGraphControl2->AxisChange();
	//zedGraphControl2->Invalidate();
	//zedGraphControl3->AxisChange();
	//zedGraphControl3->Invalidate();

	//if (resetScale) {
	//	panel->XAxis->Scale->Min = 0;
	//	panel->XAxis->Scale->Max = 1;
	//	panel->YAxis->Scale->Min = 0;
	//	panel->YAxis->Scale->Max = 1;
	//	zedGraphControl1->AxisChange();
	//	zedGraphControl1->Invalidate();
	//	panel2->XAxis->Scale->Min = 0;
	//	panel2->XAxis->Scale->Max = 1;
	//	panel2->YAxis->Scale->Min = 0;
	//	panel2->YAxis->Scale->Max = 1;
	//	zedGraphControl1->AxisChange();
	//	zedGraphControl1->Invalidate();
	//	panel3->XAxis->Scale->Min = 0;
	//	panel3->XAxis->Scale->Max = 1;
	//	panel3->YAxis->Scale->Min = 0;
	//	panel3->YAxis->Scale->Max = 1;
	//	zedGraphControl1->AxisChange();
	//	zedGraphControl1->Invalidate();
	//}

	// СПРАВКА
	// 
	// UpdateOutputInfo(result, Task, controlLocalError);

	delete solverTest;
}

private: System::Void launch_Click(System::Object^ sender, System::EventArgs^ e) {
	SolveTask(task, false);
}

private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	SolveTask(task, true);
}

//private: void UpdateOutputInfo(const table& result, int Task, bool controlLocalError) {
//	richTextBox1->Clear();
//
//	richTextBox1->AppendText("Выходные данные программы:\n\n");
//
//	richTextBox1->AppendText(String::Format("n = {0}, b - x_n = {1:F6}\n\n", result.step, result.distance));
//
//	// Локальная погрешность
//	if (controlLocalError) {
//		if (Task == 3) {
//			richTextBox1->AppendText(String::Format("max |ОЛП1| = {0:F6}\n", result.max_local_err1[0]));
//			richTextBox1->AppendText(String::Format("max |ОЛП2| = {0:F6}\n\n", result.max_local_err1[1]));
//		}
//		else {
//			richTextBox1->AppendText(String::Format("max |ОЛП| = {0:F6}\n\n", result.max_local_err));
//		}
//	}
//
//	// Статистика шага
//	richTextBox1->AppendText(String::Format("Общее число удвоений шага: {0}\n", result.total_doublings));
//	richTextBox1->AppendText(String::Format("Общее число деления шага: {0}\n\n", result.total_divisions));
//
//	richTextBox1->AppendText(String::Format("max h_i = {0:E6} при x = {1:F6}\n", result.max_h, result.x_max_h));
//	richTextBox1->AppendText(String::Format("min h_i = {0:E6} при x = {1:F6}\n\n", result.min_h, result.x_min_h));
//
//	// Для тестовой задачи
//	if (Task == 1) {
//		richTextBox1->AppendText(String::Format("max |u_i - v_i| = {0:E} при x = {1:E}",
//			result.max_gl_err, result.x_max_gl_err));
//	}
//}

private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	SolveTask(task, false);
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbU0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbH_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbStiffness_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void X0_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void scaleX0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbU0Prime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void scaleX1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbMass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbTEnd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbT0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void scaleX0_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void scaleX1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void scaleY0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void scaleY1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void zedGraphControl1_Load_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
