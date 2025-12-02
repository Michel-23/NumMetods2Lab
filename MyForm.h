#pragma once
#include <math.h>
#include <vector>

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

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
				delete components;
		}

	private:
		int task = 1;

		System::Windows::Forms::TabPage^ tabPage2;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
		ZedGraph::ZedGraphControl^ zedGraphControl2;
		ZedGraph::ZedGraphControl^ zedGraphControl1;

		System::Windows::Forms::TabPage^ tabPage1;

		System::Windows::Forms::TextBox^ tbNMax;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Label^ label6;

		System::Windows::Forms::TabControl^ tabControl1;

		System::Windows::Forms::Button^ launch;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::TextBox^ scaleY1;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::TextBox^ scaleY0;
		System::Windows::Forms::TextBox^ scaleX1;
		System::Windows::Forms::TextBox^ scaleX0;
		System::Windows::Forms::Button^ reset;
		System::Windows::Forms::RichTextBox^ richTextBox1;

		System::Windows::Forms::TabControl^ tabControl2;
		System::Windows::Forms::TabPage^ tabPage3;
		System::Windows::Forms::DataGridView^ dataGridView1;
		System::Windows::Forms::TabPage^ tabPage4;
		System::Windows::Forms::TabPage^ tabPage5;

		System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
		System::Windows::Forms::DataGridViewTextBoxColumn^ vi;
		System::Windows::Forms::DataGridViewTextBoxColumn^ v2i;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;

		System::Windows::Forms::DataGridView^ dataGridView2;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;

		System::Windows::Forms::DataGridView^ dataGridView3;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
		System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
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
			   this->tbNMax = (gcnew System::Windows::Forms::TextBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
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
			   this->tableLayoutPanel1->Controls->Add(this->zedGraphControl2, 1, 0);
			   this->tableLayoutPanel1->Controls->Add(this->zedGraphControl1, 0, 0);
			   this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 1, 1);
			   this->tableLayoutPanel1->Location = System::Drawing::Point(228, 0);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 2;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(905, 621);
			   this->tableLayoutPanel1->TabIndex = 11;
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
			   this->zedGraphControl2->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl2_Load);
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
			   this->tabPage1->Controls->Add(this->tbNMax);
			   this->tabPage1->Controls->Add(this->button2);
			   this->tabPage1->Controls->Add(this->button1);
			   this->tabPage1->Controls->Add(this->label6);
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
			   // tbNMax
			   // 
			   this->tbNMax->Location = System::Drawing::Point(553, 79);
			   this->tbNMax->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->tbNMax->Name = L"tbNMax";
			   this->tbNMax->Size = System::Drawing::Size(89, 22);
			   this->tbNMax->TabIndex = 16;
			   this->tbNMax->Text = L"1000";
			   this->tbNMax->TextChanged += gcnew System::EventHandler(this, &MyForm::tbT0_TextChanged);
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
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(495, 81);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(48, 16);
			   this->label6->TabIndex = 14;
			   this->label6->Text = L"N max:";
			   this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
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

		   // ------------------ ОСНОВНАЯ ЛОГИКА ------------------

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		task = 1;
		SolveTask(1, false);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		task = 2;
		SolveTask(2, false);
	}

	private: void SolveTask(int Task, bool resetScale) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;

		// Очистка графиков
		panel->CurveList->Clear();
		panel->GraphObjList->Clear();
		panel2->CurveList->Clear();
		panel2->GraphObjList->Clear();

		// Наборы точек для графиков
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList(); // основное/численное
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList(); // решение на половинном шаге
		PointPairList^ exact_list = gcnew ZedGraph::PointPairList(); // аналитическое (только для тестовой)
		PointPairList^ err_list = gcnew ZedGraph::PointPairList(); // ошибки

		if (resetScale) {
			// Сброс масштаба
			scaleX0->Text = "0";
			scaleX1->Text = "1";
			scaleY0->Text = "0";
			scaleY1->Text = "1";
		}

		int N = System::Convert::ToInt32(tbNMax->Text);

		// Очистка таблиц
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();
		dataGridView3->Rows->Clear();
		dataGridView3->Columns->Clear();

		// Набор n для таблиц (можно менять при необходимости)
		std::vector<int> nValues = {
				10, 20, 50, 80, 100, 200, 500, 800, 1000,
				10000, 100000 // 1e6 — осторожно, очень долго считать
					};


		// =================== ТЕСТОВАЯ ЗАДАЧА ===================
		if (Task == 1) {
			TestTask solverTest(N);
			std::vector<std::vector<double>> result = solverTest.calculate();

			// --------- Таблица 1: i, x_i, u_i, v_i, u_i - v_i ---------
			array<String^>^ columnNames1 = { "i", "x_i", "u_i", "v_i", "u_i - v_i" };
			for each (String ^ colName in columnNames1) {
				dataGridView1->Columns->Add(colName, colName);
			}

			double maxErrorForN = 0.0;
			double xAtMaxErr = 0.0;

			for (int i = 0; i < (int)result.size(); ++i) {
				int rowIndex = dataGridView1->Rows->Add();

				dataGridView1->Rows[rowIndex]->Cells[0]->Value = result[i][0]; // i
				dataGridView1->Rows[rowIndex]->Cells[1]->Value = result[i][1]; // x_i
				dataGridView1->Rows[rowIndex]->Cells[2]->Value = result[i][2]; // u_i
				dataGridView1->Rows[rowIndex]->Cells[3]->Value = result[i][3]; // v_i
				dataGridView1->Rows[rowIndex]->Cells[4]->Value = result[i][4]; // u_i - v_i

				double err = fabs(result[i][4]);
				if (err > maxErrorForN) {
					maxErrorForN = err;
					xAtMaxErr = result[i][1];
				}

				// точки для графиков
				exact_list->Add(result[i][1], result[i][2]);
				f1_list->Add(result[i][1], result[i][3]);
				err_list->Add(result[i][1], err);
			}

			// --------- Таблица 2: порядок сходимости (по n) ----------
			array<String^>^ columnNames2 = { "n", "max|u_i - v_i|", "Отношение" };
			for each (String ^ colName in columnNames2) {
				dataGridView2->Columns->Add(colName, colName);
			}

			double prevError = -1.0;
			for (int k = 0; k < (int)nValues.size(); ++k) {
				int nCurr = nValues[k];
				if (nCurr < 3 || nCurr > N) continue;

				TestTask solverN(nCurr);
				std::vector<std::vector<double>> resN = solverN.calculate();

				double maxErr = 0.0;
				for (int i = 0; i < (int)resN.size(); ++i) {
					double e = fabs(resN[i][4]);
					if (e > maxErr) maxErr = e;
				}

				int rowIndex = dataGridView2->Rows->Add();
				dataGridView2->Rows[rowIndex]->Cells[0]->Value = nCurr;
				dataGridView2->Rows[rowIndex]->Cells[1]->Value = maxErr;

				if (prevError > 0.0) {
					dataGridView2->Rows[rowIndex]->Cells[2]->Value = prevError / maxErr;
				}

				prevError = maxErr;
			}

			// --------- Таблица 3: E1 и логарифмы (для тестовой задачи) ----------
			array<String^>^ columnNames3 = {
				"n",
				"E1 = max|u_i - v_i|",
				"E2 = max|v_i - v2(2i)|",
				"lg n",
				"-lg E1",
				"-lg E2"
			};
			for each (String ^ colName in columnNames3) {
				dataGridView3->Columns->Add(colName, colName);
			}

			for (int k = 0; k < (int)nValues.size(); ++k) {
				int nCurr = nValues[k];
				if (nCurr < 3 || nCurr > N) continue;

				TestTask solverN(nCurr);
				std::vector<std::vector<double>> resN = solverN.calculate();

				double E1 = 0.0;
				for (int i = 0; i < (int)resN.size(); ++i) {
					double e = fabs(resN[i][4]);
					if (e > E1) E1 = e;
				}

				int rowIndex = dataGridView3->Rows->Add();
				dataGridView3->Rows[rowIndex]->Cells[0]->Value = nCurr;
				dataGridView3->Rows[rowIndex]->Cells[1]->Value = E1;
				// E2 и -lg E2 оставляем пустыми, заполняются для основной задачи

				double lgN = log10((double)nCurr);
				double lgE1 = (E1 > 0.0) ? -log10(E1) : 0.0;
				dataGridView3->Rows[rowIndex]->Cells[3]->Value = lgN;
				dataGridView3->Rows[rowIndex]->Cells[4]->Value = lgE1;
			}

			// --------- Графики тестовой задачи ----------
			double xMin = Convert::ToDouble(scaleX0->Text);
			double xMax = Convert::ToDouble(scaleX1->Text);
			double yMin = Convert::ToDouble(scaleY0->Text);
			double yMax = Convert::ToDouble(scaleY1->Text);

			panel->Title->Text = "Тестовая задача: u(x) и v(x)";
			panel->XAxis->Title->Text = "x";
			panel->YAxis->Title->Text = "u(x)";
			panel->AddCurve("u(x)", exact_list, System::Drawing::Color::Red, SymbolType::None);
			panel->AddCurve("v(x)", f1_list, System::Drawing::Color::Blue, SymbolType::None);

			panel2->Title->Text = "Тестовая задача: |u(x) - v(x)|";
			panel2->XAxis->Title->Text = "x";
			panel2->YAxis->Title->Text = "|u - v|";
			panel2->AddCurve("|u-v|", err_list, System::Drawing::Color::Green, SymbolType::None);

			panel->XAxis->Scale->Min = xMin;
			panel->XAxis->Scale->Max = xMax;
			panel->YAxis->Scale->Min = yMin;
			panel->YAxis->Scale->Max = yMax;

			panel2->XAxis->Scale->Min = xMin;
			panel2->XAxis->Scale->Max = xMax;
			panel2->YAxis->Scale->Min = 0;
			panel2->YAxis->Scale->Max = yMax;

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			zedGraphControl2->AxisChange();
			zedGraphControl2->Invalidate();

			// --------- Справка ---------
			richTextBox1->Clear();
			richTextBox1->AppendText(
				String::Format("Тестовая задача (n = {0})\n", N)
			);
			richTextBox1->AppendText(
				String::Format("max|u_i - v_i| = {0:E6} при x = {1:F6}\n",
					maxErrorForN, xAtMaxErr)
			);
		}

		// =================== ОСНОВНАЯ ЗАДАЧА (ОДНА) ===================
		else if (Task == 2) {
			MainTask solverMain(N);
			std::vector<std::pair<double, double>> series, series2, raz;
			std::vector<std::vector<double>> table;
			solverMain.calculate(series, series2, raz, table);

			// --------- Таблица 1: i, x_i, v_i, v2(2i), |v_i - v2(2i)| ----------
			array<String^>^ columnNames1 = { "i", "x_i", "v_i", "v2(2i)", "|v_i - v2(2i)|" };
			for each (String ^ colName in columnNames1) {
				dataGridView1->Columns->Add(colName, colName);
			}

			double maxError2 = 0.0;
			double xAtMaxErr2 = 0.0;

			for (int i = 0; i < (int)table.size(); ++i) {
				int rowIndex = dataGridView1->Rows->Add();

				dataGridView1->Rows[rowIndex]->Cells[0]->Value = table[i][0]; // i
				dataGridView1->Rows[rowIndex]->Cells[1]->Value = table[i][1]; // x_i
				dataGridView1->Rows[rowIndex]->Cells[2]->Value = table[i][2]; // v_i
				dataGridView1->Rows[rowIndex]->Cells[3]->Value = table[i][3]; // v2(2i)
				dataGridView1->Rows[rowIndex]->Cells[4]->Value = table[i][4]; // |v_i - v2(2i)|

				double err = fabs(table[i][4]);
				if (err > maxError2) {
					maxError2 = err;
					xAtMaxErr2 = table[i][1];
				}

				f1_list->Add(table[i][1], table[i][2]);
				f2_list->Add(table[i][1], table[i][3]);
				err_list->Add(table[i][1], err);
			}

			// --------- Таблица 2: порядок сходимости основной задачи ----------
			array<String^>^ columnNames2 = { "n", "max|v_i - v2(2i)|", "Отношение" };
			for each (String ^ colName in columnNames2) {
				dataGridView2->Columns->Add(colName, colName);
			}

			double prevEps2 = -1.0;
			for (int k = 0; k < (int)nValues.size(); ++k) {
				int nCurr = nValues[k];
				if (nCurr < 3 || nCurr > N) continue;

				MainTask solverN(nCurr);
				std::vector<std::pair<double, double>> s, s2, r;
				std::vector<std::vector<double>> tabN;
				solverN.calculate(s, s2, r, tabN);

				double E2 = 0.0;
				for (int i = 0; i < (int)tabN.size(); ++i) {
					double e = fabs(tabN[i][4]);
					if (e > E2) E2 = e;
				}

				int rowIndex = dataGridView2->Rows->Add();
				dataGridView2->Rows[rowIndex]->Cells[0]->Value = nCurr;
				dataGridView2->Rows[rowIndex]->Cells[1]->Value = E2;

				if (prevEps2 > 0.0) {
					dataGridView2->Rows[rowIndex]->Cells[2]->Value = prevEps2 / E2;
				}

				prevEps2 = E2;
			}

			// --------- Таблица 3: одновременно E1 и E2 ----------
			array<String^>^ columnNames3 = {
				"n",
				"E1 = max|u_i - v_i|",
				"E2 = max|v_i - v2(2i)|",
				"lg n",
				"-lg E1",
				"-lg E2"
			};
			for each (String ^ colName in columnNames3) {
				dataGridView3->Columns->Add(colName, colName);
			}

			for (int k = 0; k < (int)nValues.size(); ++k) {
				int nCurr = nValues[k];
				if (nCurr < 3 || nCurr > N) continue;

				// E1 – из тестовой задачи
				TestTask solverTestN(nCurr);
				std::vector<std::vector<double>> resTestN = solverTestN.calculate();
				double E1 = 0.0;
				for (int i = 0; i < (int)resTestN.size(); ++i) {
					double e = fabs(resTestN[i][4]);
					if (e > E1) E1 = e;
				}

				// E2 – из основной задачи
				MainTask solverMainN(nCurr);
				std::vector<std::pair<double, double>> s, s2, r;
				std::vector<std::vector<double>> tabMainN;
				solverMainN.calculate(s, s2, r, tabMainN);
				double E2 = 0.0;
				for (int i = 0; i < (int)tabMainN.size(); ++i) {
					double e = fabs(tabMainN[i][4]);
					if (e > E2) E2 = e;
				}

				int rowIndex = dataGridView3->Rows->Add();
				dataGridView3->Rows[rowIndex]->Cells[0]->Value = nCurr;
				dataGridView3->Rows[rowIndex]->Cells[1]->Value = E1;
				dataGridView3->Rows[rowIndex]->Cells[2]->Value = E2;

				double lgN = log10((double)nCurr);
				double lgE1 = (E1 > 0.0) ? -log10(E1) : 0.0;
				double lgE2 = (E2 > 0.0) ? -log10(E2) : 0.0;

				dataGridView3->Rows[rowIndex]->Cells[3]->Value = lgN;
				dataGridView3->Rows[rowIndex]->Cells[4]->Value = lgE1;
				dataGridView3->Rows[rowIndex]->Cells[5]->Value = lgE2;
			}

			// --------- Графики основной задачи ----------
			double xMin = Convert::ToDouble(scaleX0->Text);
			double xMax = Convert::ToDouble(scaleX1->Text);
			double yMin = Convert::ToDouble(scaleY0->Text);
			double yMax = Convert::ToDouble(scaleY1->Text);

			panel->Title->Text = "Основная задача: v(x) и v2(x)";
			panel->XAxis->Title->Text = "x";
			panel->YAxis->Title->Text = "u(x)";
			panel->AddCurve("v(x)", f1_list, System::Drawing::Color::Blue, SymbolType::None);
			panel->AddCurve("v2(x)", f2_list, System::Drawing::Color::Red, SymbolType::None);

			panel2->Title->Text = "Основная задача: |v(x) - v2(x)|";
			panel2->XAxis->Title->Text = "x";
			panel2->YAxis->Title->Text = "|v - v2|";
			panel2->AddCurve("|v-v2|", err_list, System::Drawing::Color::Green, SymbolType::None);

			panel->XAxis->Scale->Min = xMin;
			panel->XAxis->Scale->Max = xMax;
			panel->YAxis->Scale->Min = yMin;
			panel->YAxis->Scale->Max = yMax;

			panel2->XAxis->Scale->Min = xMin;
			panel2->XAxis->Scale->Max = xMax;
			panel2->YAxis->Scale->Min = 0;
			panel2->YAxis->Scale->Max = yMax;

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();
			zedGraphControl2->AxisChange();
			zedGraphControl2->Invalidate();

			// --------- Справка ---------
			richTextBox1->Clear();
			richTextBox1->AppendText(
				String::Format("Основная задача (n = {0})\n", N)
			);
			richTextBox1->AppendText(
				String::Format("max|v_i - v2(2i)| = {0:E6} при x = {1:F6}\n",
					maxError2, xAtMaxErr2)
			);
		}
	}

	private: System::Void launch_Click(System::Object^ sender, System::EventArgs^ e) {
		SolveTask(task, false);
	}

	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
		SolveTask(task, true);
	}

		   // -------- пустые обработчики, оставлены для дизайнера --------

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tbH_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tbStiffness_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
	private: System::Void X0_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void scaleX0_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tbU0Prime_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void scaleX1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tbMass_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tbTEnd_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void tbT0_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label10_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void scaleX0_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label10_Click_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void scaleX1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void scaleY0_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void scaleY1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void zedGraphControl1_Load_1(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
	private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
	private: System::Void zedGraphControl2_Load(System::Object^ sender, System::EventArgs^ e) {}
	};
}
