#pragma once

namespace CalcMass {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbWidth;
	private: System::Windows::Forms::TextBox^ tbHeight;
	protected:


	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::TextBox^ tbDepth;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ tbThick;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ tbThick_koz;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbDepth_koz;

	private: System::Windows::Forms::TextBox^ tbWidth_koz;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::TextBox^ tbMass;
	private: System::Windows::Forms::TextBox^ tbMass_koz;
	private: System::Windows::Forms::GroupBox^ groupBox_pan;

	private: System::Windows::Forms::TextBox^ tbMass_pan;
	private: System::Windows::Forms::TextBox^ tbThick_pan;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbDepth_pan;

	private: System::Windows::Forms::TextBox^ tbWidth_pan;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbHeight_pan;

	private: System::Windows::Forms::RadioButton^ rb_R;

	private: System::Windows::Forms::RadioButton^ rb_L;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ tbMass_rand;

	private: System::Windows::Forms::TextBox^ tb_s;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ tb_square;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbWidth = (gcnew System::Windows::Forms::TextBox());
			this->tbHeight = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->tbDepth = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tbMass = (gcnew System::Windows::Forms::TextBox());
			this->tbThick = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tbMass_koz = (gcnew System::Windows::Forms::TextBox());
			this->tbThick_koz = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbDepth_koz = (gcnew System::Windows::Forms::TextBox());
			this->tbWidth_koz = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox_pan = (gcnew System::Windows::Forms::GroupBox());
			this->rb_R = (gcnew System::Windows::Forms::RadioButton());
			this->rb_L = (gcnew System::Windows::Forms::RadioButton());
			this->tbMass_pan = (gcnew System::Windows::Forms::TextBox());
			this->tbThick_pan = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbDepth_pan = (gcnew System::Windows::Forms::TextBox());
			this->tbWidth_pan = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbHeight_pan = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->tbMass_rand = (gcnew System::Windows::Forms::TextBox());
			this->tb_s = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tb_square = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox_pan->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ширина";
			// 
			// tbWidth
			// 
			this->tbWidth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbWidth->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbWidth->Location = System::Drawing::Point(8, 67);
			this->tbWidth->Name = L"tbWidth";
			this->tbWidth->Size = System::Drawing::Size(242, 29);
			this->tbWidth->TabIndex = 1;
			// 
			// tbHeight
			// 
			this->tbHeight->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbHeight->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbHeight->Location = System::Drawing::Point(8, 138);
			this->tbHeight->Name = L"tbHeight";
			this->tbHeight->Size = System::Drawing::Size(242, 29);
			this->tbHeight->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Высота";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnOK, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(17, 509);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1006, 58);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(506, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(497, 52);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"Очистить";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(497, 52);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"Расчет";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MainForm::btnOK_Click);
			// 
			// tbDepth
			// 
			this->tbDepth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbDepth->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbDepth->Location = System::Drawing::Point(8, 208);
			this->tbDepth->Name = L"tbDepth";
			this->tbDepth->Size = System::Drawing::Size(242, 29);
			this->tbDepth->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Глубина";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tbMass);
			this->groupBox1->Controls->Add(this->tbThick);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tbDepth);
			this->groupBox1->Controls->Add(this->tbWidth);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->tbHeight);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(256, 485);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Кожух ТД-08-034.ШхВхГ-RAL";
			// 
			// tbMass
			// 
			this->tbMass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbMass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbMass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbMass->Location = System::Drawing::Point(8, 383);
			this->tbMass->Multiline = true;
			this->tbMass->Name = L"tbMass";
			this->tbMass->ReadOnly = true;
			this->tbMass->Size = System::Drawing::Size(242, 91);
			this->tbMass->TabIndex = 10;
			this->tbMass->Text = L"Mass\r\n2\r\n3\r\n4";
			this->tbMass->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::tbMass_MouseClick);
			this->tbMass->Enter += gcnew System::EventHandler(this, &MainForm::tbMass_Enter);
			// 
			// tbThick
			// 
			this->tbThick->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbThick->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbThick->Location = System::Drawing::Point(8, 285);
			this->tbThick->Name = L"tbThick";
			this->tbThick->Size = System::Drawing::Size(242, 29);
			this->tbThick->TabIndex = 8;
			this->tbThick->Text = L"0,7";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Толщина";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tbMass_koz);
			this->groupBox2->Controls->Add(this->tbThick_koz);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->tbDepth_koz);
			this->groupBox2->Controls->Add(this->tbWidth_koz);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(274, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(256, 485);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Козырек ТД-08-035.ШхГ-RAL";
			// 
			// tbMass_koz
			// 
			this->tbMass_koz->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbMass_koz->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbMass_koz->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbMass_koz->Location = System::Drawing::Point(8, 383);
			this->tbMass_koz->Multiline = true;
			this->tbMass_koz->Name = L"tbMass_koz";
			this->tbMass_koz->ReadOnly = true;
			this->tbMass_koz->Size = System::Drawing::Size(242, 91);
			this->tbMass_koz->TabIndex = 11;
			this->tbMass_koz->Text = L"Mass_koz";
			this->tbMass_koz->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::tbMass_koz_MouseClick);
			this->tbMass_koz->Enter += gcnew System::EventHandler(this, &MainForm::tbMass_koz_Enter);
			// 
			// tbThick_koz
			// 
			this->tbThick_koz->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbThick_koz->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbThick_koz->Location = System::Drawing::Point(8, 285);
			this->tbThick_koz->Name = L"tbThick_koz";
			this->tbThick_koz->Size = System::Drawing::Size(242, 29);
			this->tbThick_koz->TabIndex = 8;
			this->tbThick_koz->Text = L"0,7";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(8, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Толщина";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 21);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ширина";
			// 
			// tbDepth_koz
			// 
			this->tbDepth_koz->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbDepth_koz->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbDepth_koz->Location = System::Drawing::Point(10, 138);
			this->tbDepth_koz->Name = L"tbDepth_koz";
			this->tbDepth_koz->Size = System::Drawing::Size(242, 29);
			this->tbDepth_koz->TabIndex = 4;
			// 
			// tbWidth_koz
			// 
			this->tbWidth_koz->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbWidth_koz->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbWidth_koz->Location = System::Drawing::Point(8, 67);
			this->tbWidth_koz->Name = L"tbWidth_koz";
			this->tbWidth_koz->Size = System::Drawing::Size(242, 29);
			this->tbWidth_koz->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(10, 107);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Глубина";
			// 
			// groupBox_pan
			// 
			this->groupBox_pan->Controls->Add(this->rb_R);
			this->groupBox_pan->Controls->Add(this->rb_L);
			this->groupBox_pan->Controls->Add(this->tbMass_pan);
			this->groupBox_pan->Controls->Add(this->tbThick_pan);
			this->groupBox_pan->Controls->Add(this->label8);
			this->groupBox_pan->Controls->Add(this->label9);
			this->groupBox_pan->Controls->Add(this->tbDepth_pan);
			this->groupBox_pan->Controls->Add(this->tbWidth_pan);
			this->groupBox_pan->Controls->Add(this->label10);
			this->groupBox_pan->Controls->Add(this->label11);
			this->groupBox_pan->Controls->Add(this->tbHeight_pan);
			this->groupBox_pan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_pan->Location = System::Drawing::Point(536, 12);
			this->groupBox_pan->Name = L"groupBox_pan";
			this->groupBox_pan->Size = System::Drawing::Size(294, 485);
			this->groupBox_pan->TabIndex = 11;
			this->groupBox_pan->TabStop = false;
			this->groupBox_pan->Text = L"Панель ТК-08-33.000-ШхВхГхТ.Б";
			// 
			// rb_R
			// 
			this->rb_R->AutoSize = true;
			this->rb_R->Location = System::Drawing::Point(126, 343);
			this->rb_R->Name = L"rb_R";
			this->rb_R->Size = System::Drawing::Size(92, 25);
			this->rb_R->TabIndex = 12;
			this->rb_R->Text = L"Бонка П";
			this->rb_R->UseVisualStyleBackColor = true;
			// 
			// rb_L
			// 
			this->rb_L->AutoSize = true;
			this->rb_L->Checked = true;
			this->rb_L->Location = System::Drawing::Point(12, 343);
			this->rb_L->Name = L"rb_L";
			this->rb_L->Size = System::Drawing::Size(92, 25);
			this->rb_L->TabIndex = 11;
			this->rb_L->TabStop = true;
			this->rb_L->Text = L"Бонка Л";
			this->rb_L->UseVisualStyleBackColor = true;
			// 
			// tbMass_pan
			// 
			this->tbMass_pan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbMass_pan->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbMass_pan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbMass_pan->Location = System::Drawing::Point(8, 383);
			this->tbMass_pan->Multiline = true;
			this->tbMass_pan->Name = L"tbMass_pan";
			this->tbMass_pan->ReadOnly = true;
			this->tbMass_pan->Size = System::Drawing::Size(280, 91);
			this->tbMass_pan->TabIndex = 10;
			this->tbMass_pan->Text = L"Mass_pan\r\n2\r\n3\r\n4";
			this->tbMass_pan->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::tbMass_pan_MouseClick);
			this->tbMass_pan->Enter += gcnew System::EventHandler(this, &MainForm::tbMass_pan_Enter);
			// 
			// tbThick_pan
			// 
			this->tbThick_pan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbThick_pan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbThick_pan->Location = System::Drawing::Point(8, 285);
			this->tbThick_pan->Name = L"tbThick_pan";
			this->tbThick_pan->Size = System::Drawing::Size(280, 29);
			this->tbThick_pan->TabIndex = 8;
			this->tbThick_pan->Text = L"3";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 21);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Толщина";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(8, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 21);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Ширина";
			// 
			// tbDepth_pan
			// 
			this->tbDepth_pan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbDepth_pan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbDepth_pan->Location = System::Drawing::Point(8, 208);
			this->tbDepth_pan->Name = L"tbDepth_pan";
			this->tbDepth_pan->Size = System::Drawing::Size(280, 29);
			this->tbDepth_pan->TabIndex = 4;
			// 
			// tbWidth_pan
			// 
			this->tbWidth_pan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbWidth_pan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbWidth_pan->Location = System::Drawing::Point(8, 67);
			this->tbWidth_pan->Name = L"tbWidth_pan";
			this->tbWidth_pan->Size = System::Drawing::Size(280, 29);
			this->tbWidth_pan->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(8, 177);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 21);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Глубина";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(8, 107);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 21);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Высота";
			// 
			// tbHeight_pan
			// 
			this->tbHeight_pan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbHeight_pan->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbHeight_pan->Location = System::Drawing::Point(8, 138);
			this->tbHeight_pan->Name = L"tbHeight_pan";
			this->tbHeight_pan->Size = System::Drawing::Size(280, 29);
			this->tbHeight_pan->TabIndex = 3;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->tbMass_rand);
			this->groupBox4->Controls->Add(this->tb_s);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->tb_square);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(836, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(190, 485);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Произвольные";
			// 
			// tbMass_rand
			// 
			this->tbMass_rand->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbMass_rand->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbMass_rand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbMass_rand->Location = System::Drawing::Point(8, 383);
			this->tbMass_rand->Multiline = true;
			this->tbMass_rand->Name = L"tbMass_rand";
			this->tbMass_rand->ReadOnly = true;
			this->tbMass_rand->Size = System::Drawing::Size(176, 91);
			this->tbMass_rand->TabIndex = 11;
			this->tbMass_rand->Text = L"Mass_rand";
			// 
			// tb_s
			// 
			this->tb_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_s->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_s->Location = System::Drawing::Point(8, 138);
			this->tb_s->Name = L"tb_s";
			this->tb_s->Size = System::Drawing::Size(176, 29);
			this->tb_s->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(8, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(81, 21);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Толщина";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(8, 36);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 21);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Площадь";
			// 
			// tb_square
			// 
			this->tb_square->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_square->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tb_square->Location = System::Drawing::Point(8, 67);
			this->tb_square->Name = L"tb_square";
			this->tb_square->Size = System::Drawing::Size(176, 29);
			this->tb_square->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1036, 579);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox_pan);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(1052, 618);
			this->MinimumSize = System::Drawing::Size(1052, 618);
			this->Name = L"MainForm";
			this->Text = L"Calc Mass";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::MainForm_KeyDown);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox_pan->ResumeLayout(false);
			this->groupBox_pan->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		int width, height, depth;
		double S, Massa, square;
	
		width = 0;
		height = 0;
		depth = 0;
		S = 0;
				

		if (this->tbWidth->Text != "") {width = int::Parse(this->tbWidth->Text); }
		if (this->tbHeight->Text != "") {height = int::Parse(this->tbHeight->Text); }
		if (this->tbDepth->Text != "") {depth = int::Parse(this->tbDepth->Text); }		
		if (this->tbThick->Text != "") { S = double::Parse(this->tbThick->Text); }
		
		Massa = Math::Round((40 * (height + width) + width * (height + depth) + 2 * height * depth) * S * 7.850 / 1e6, 2);
		this->tbMass->Text = System::Convert::ToString("см.\r\nТД-08-034.\r\nШхВхГ-RAL\r\n" + Massa + " кг");

		width = 0;
		height = 0;
		depth = 0;
		S = 0;

		if (this->tbWidth_koz->Text != "") { width = int::Parse(this->tbWidth_koz->Text); }
		if (this->tbDepth_koz->Text != "") { depth = int::Parse(this->tbDepth_koz->Text); }
		if (this->tbThick_koz->Text != "") { S = double::Parse(this->tbThick_koz->Text); }
		Massa = Math::Round((0.27 * depth * depth + 4.56 * depth + depth * width * 1.04 + 30.7 * width) * S * 7.850 / 1e6, 2);
		this->tbMass_koz->Text = System::Convert::ToString("см.\r\nТД-08-035.\r\nШхГ-RAL\r\n" + Massa + " кг");

		width = 0;
		height = 0;
		depth = 0;
		S = 0;
		
		if (this->tbWidth_pan->Text != "") { width = int::Parse(this->tbWidth_pan->Text); }
		if (this->tbHeight_pan->Text != "") { height = int::Parse(this->tbHeight_pan->Text); }
		if (this->tbDepth_pan->Text != "") { depth = int::Parse(this->tbDepth_pan->Text); }
		if (this->tbThick_pan->Text != "") { S = double::Parse(this->tbThick_pan->Text); }
		Massa = Math::Round((50 + 2 * depth + width - 4.5 * S) * height * S * 7.850 / 1e6 + 0.02, 2);
		this->tbMass_pan->Text = System::Convert::ToString("см.\r\nТК-08-33.000-\r\nШхВхГхТ.Б\r\n" + Massa + " кг");
		

		if (this->rb_L->Checked) {
			this->groupBox_pan->Text = System::Convert::ToString("ТК-08-33.000-" + width + "x" + height + "x" + depth + "x" + S + ".Л");
		//	this->tbMass_pan->Text = System::Convert::ToString("см.\r\nТК-08-33.\r\nШхВхГхТ.Л\r\n" + Massa + " кг");
		}

		if (this->rb_R->Checked) {
			this->groupBox_pan->Text = System::Convert::ToString("ТК-08-33.000-" + width + "x" + height + "x" + depth + "x" + S + ".П");
		//	this->tbMass_pan->Text = System::Convert::ToString("см.\r\nТК-08-33.\r\nШхВхГхТ.П\r\n" + Massa + " кг"); 
		}
	
		square = 0;		
		S = 0;

		if (this->tb_square->Text != "") { square = int::Parse(this->tb_square->Text); }
		if (this->tb_s->Text != "") { S = double::Parse(this->tb_s->Text); }

		Massa = Math::Round(square * S * 7.850 / 1e6, 2);
		this->tbMass_rand->Text = System::Convert::ToString("Масса: " + Massa + " кг");


	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbWidth->Text = "";
		this->tbHeight->Text = "";
		this->tbDepth->Text = "";
		this->tbThick->Text = "0,7";
		this->tbMass->Text = "";

		this->tbWidth_koz->Text = "";
		this->tbDepth_koz->Text = "";
		this->tbMass_koz->Text = "";

		this->tbWidth_pan->Text = "";
		this->tbHeight_pan->Text = "";
		this->tbDepth_pan->Text = "";
		this->tbMass_pan->Text = "";

		this->tbMass_rand->Text = "";

		this->groupBox_pan->Text = "Панель ТК-08-33.000-ШхВхГхТ.Б";
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->tbMass->Text = "";
	this->tbMass_koz->Text = "";
	this->tbMass_pan->Text = "";
	this->tbMass_rand->Text = "";
	}
	
	private: System::Void tbMass_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->tbMass->SelectAll();
		//Clipboard::SetText(this->tbMass->Text);
	}
	private: System::Void tbMass_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->tbMass->SelectAll();
	}	

	private: System::Void tbMass_koz_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	    this->tbMass_koz->SelectAll();
	}
	private: System::Void tbMass_koz_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->tbMass_koz->SelectAll();
	}		
	private: System::Void tbMass_pan_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->tbMass_pan->SelectAll();
	}
	private: System::Void tbMass_pan_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->tbMass_pan->SelectAll();
	}
	private: System::Void MainForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::F10) { Application::Exit(); }
		if (e->KeyCode == Keys::F5) { btnOK_Click(sender, e); }
		if (e->KeyCode == Keys::Enter) { btnOK_Click(sender, e); }
		if (e->KeyCode == Keys::F8) { btnClear_Click(sender, e); }

	}

};
}