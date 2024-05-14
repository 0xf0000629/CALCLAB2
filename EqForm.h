#pragma once
#include <math.h>
#include <string>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <fstream>
namespace CALCLAB2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ EqForm
	/// </summary>
	public ref class EqForm : public System::Windows::Forms::Form
	{
	public:
		EqForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~EqForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ eqrb1;
	private: System::Windows::Forms::RadioButton^ eqrb2;
	private: System::Windows::Forms::RadioButton^ eqrb3;
	private: System::Windows::Forms::RadioButton^ eqrb4;
	protected:

	protected:



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ BXtxt;

	private: System::Windows::Forms::TextBox^ X0txt;

	private: System::Windows::Forms::TextBox^ AXtxt;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ BYtxt;

	private: System::Windows::Forms::TextBox^ Y0txt;
	private: System::Windows::Forms::TextBox^ AYtxt;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ EPStext;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;












	private: System::Windows::Forms::DataGridView^ table;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ComboBox^ method;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RadioButton^ eqrb5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox1;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EqForm::typeid));
			this->eqrb1 = (gcnew System::Windows::Forms::RadioButton());
			this->eqrb2 = (gcnew System::Windows::Forms::RadioButton());
			this->eqrb3 = (gcnew System::Windows::Forms::RadioButton());
			this->eqrb4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->eqrb5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->method = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->EPStext = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BYtxt = (gcnew System::Windows::Forms::TextBox());
			this->Y0txt = (gcnew System::Windows::Forms::TextBox());
			this->AYtxt = (gcnew System::Windows::Forms::TextBox());
			this->BXtxt = (gcnew System::Windows::Forms::TextBox());
			this->X0txt = (gcnew System::Windows::Forms::TextBox());
			this->AXtxt = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// eqrb1
			// 
			this->eqrb1->AutoSize = true;
			this->eqrb1->Location = System::Drawing::Point(6, 30);
			this->eqrb1->Name = L"eqrb1";
			this->eqrb1->Size = System::Drawing::Size(126, 26);
			this->eqrb1->TabIndex = 0;
			this->eqrb1->TabStop = true;
			this->eqrb1->Text = L"Equation 1";
			this->eqrb1->UseVisualStyleBackColor = true;
			this->eqrb1->CheckedChanged += gcnew System::EventHandler(this, &EqForm::eqrb1_CheckedChanged);
			// 
			// eqrb2
			// 
			this->eqrb2->AutoSize = true;
			this->eqrb2->Location = System::Drawing::Point(6, 62);
			this->eqrb2->Name = L"eqrb2";
			this->eqrb2->Size = System::Drawing::Size(126, 26);
			this->eqrb2->TabIndex = 1;
			this->eqrb2->TabStop = true;
			this->eqrb2->Text = L"Equation 2";
			this->eqrb2->UseVisualStyleBackColor = true;
			this->eqrb2->CheckedChanged += gcnew System::EventHandler(this, &EqForm::eqrb2_CheckedChanged);
			// 
			// eqrb3
			// 
			this->eqrb3->AutoSize = true;
			this->eqrb3->Location = System::Drawing::Point(6, 94);
			this->eqrb3->Name = L"eqrb3";
			this->eqrb3->Size = System::Drawing::Size(126, 26);
			this->eqrb3->TabIndex = 2;
			this->eqrb3->TabStop = true;
			this->eqrb3->Text = L"Equation 3";
			this->eqrb3->UseVisualStyleBackColor = true;
			this->eqrb3->CheckedChanged += gcnew System::EventHandler(this, &EqForm::eqrb3_CheckedChanged);
			// 
			// eqrb4
			// 
			this->eqrb4->AutoSize = true;
			this->eqrb4->Location = System::Drawing::Point(441, 30);
			this->eqrb4->Name = L"eqrb4";
			this->eqrb4->Size = System::Drawing::Size(126, 26);
			this->eqrb4->TabIndex = 3;
			this->eqrb4->TabStop = true;
			this->eqrb4->Text = L"Equation 4";
			this->eqrb4->UseVisualStyleBackColor = true;
			this->eqrb4->CheckedChanged += gcnew System::EventHandler(this, &EqForm::eqrb4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox6);
			this->groupBox1->Controls->Add(this->pictureBox5);
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->eqrb5);
			this->groupBox1->Controls->Add(this->eqrb4);
			this->groupBox1->Controls->Add(this->eqrb3);
			this->groupBox1->Controls->Add(this->eqrb2);
			this->groupBox1->Controls->Add(this->eqrb1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(856, 131);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Choose the equation";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &EqForm::groupBox1_Enter);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(573, 81);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(253, 39);
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->WaitOnLoad = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(573, 30);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(253, 44);
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->WaitOnLoad = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(138, 94);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(266, 31);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->WaitOnLoad = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(138, 62);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(266, 31);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->WaitOnLoad = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(138, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(266, 31);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// eqrb5
			// 
			this->eqrb5->AutoSize = true;
			this->eqrb5->Location = System::Drawing::Point(441, 83);
			this->eqrb5->Name = L"eqrb5";
			this->eqrb5->Size = System::Drawing::Size(126, 26);
			this->eqrb5->TabIndex = 4;
			this->eqrb5->TabStop = true;
			this->eqrb5->Text = L"Equation 5";
			this->eqrb5->UseVisualStyleBackColor = true;
			this->eqrb5->CheckedChanged += gcnew System::EventHandler(this, &EqForm::eqrb5_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->method);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->EPStext);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->BYtxt);
			this->groupBox2->Controls->Add(this->Y0txt);
			this->groupBox2->Controls->Add(this->AYtxt);
			this->groupBox2->Controls->Add(this->BXtxt);
			this->groupBox2->Controls->Add(this->X0txt);
			this->groupBox2->Controls->Add(this->AXtxt);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox2->Location = System::Drawing::Point(12, 149);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(326, 444);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Input VALUES";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &EqForm::groupBox2_Enter);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(6, 338);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 33);
			this->label12->TabIndex = 31;
			this->label12->Text = L"File\?";
			this->label12->Click += gcnew System::EventHandler(this, &EqForm::label12_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"no thanks", L"yes please" });
			this->comboBox1->Location = System::Drawing::Point(112, 342);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 27);
			this->comboBox1->TabIndex = 30;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EqForm::comboBox1_SelectedIndexChanged_1);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(11, 29);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(235, 33);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Solving METHOD:";
			this->label17->Click += gcnew System::EventHandler(this, &EqForm::label17_Click);
			// 
			// method
			// 
			this->method->FormattingEnabled = true;
			this->method->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Slicing (1 variable)", L"Split in half (1 variable)",
					L"Simple iteration (1 variable)", L"Newthon\'s (2 variables)"
			});
			this->method->Location = System::Drawing::Point(6, 64);
			this->method->Name = L"method";
			this->method->Size = System::Drawing::Size(312, 27);
			this->method->TabIndex = 19;
			this->method->SelectedIndexChanged += gcnew System::EventHandler(this, &EqForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Papyrus", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(6, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(314, 48);
			this->button1->TabIndex = 18;
			this->button1->Text = L"GO!!!!!!!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EqForm::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(202, 242);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 19);
			this->label10->TabIndex = 17;
			this->label10->Text = L"<=";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(94, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(31, 19);
			this->label11->TabIndex = 16;
			this->label11->Text = L"<=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(202, 164);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 19);
			this->label9->TabIndex = 15;
			this->label9->Text = L"<=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(94, 164);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 19);
			this->label8->TabIndex = 14;
			this->label8->Text = L"<=";
			this->label8->Click += gcnew System::EventHandler(this, &EqForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 291);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 33);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Epsilon:";
			this->label7->Click += gcnew System::EventHandler(this, &EqForm::label7_Click);
			// 
			// EPStext
			// 
			this->EPStext->BackColor = System::Drawing::SystemColors::InfoText;
			this->EPStext->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->EPStext->Location = System::Drawing::Point(112, 295);
			this->EPStext->Name = L"EPStext";
			this->EPStext->Size = System::Drawing::Size(100, 26);
			this->EPStext->TabIndex = 12;
			this->EPStext->TextChanged += gcnew System::EventHandler(this, &EqForm::textBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(146, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 33);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(146, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 33);
			this->label5->TabIndex = 10;
			this->label5->Text = L"X";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(249, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 33);
			this->label3->TabIndex = 9;
			this->label3->Text = L"B";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 33);
			this->label4->TabIndex = 8;
			this->label4->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(249, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 33);
			this->label2->TabIndex = 7;
			this->label2->Text = L"B";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Papyrus", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 33);
			this->label1->TabIndex = 6;
			this->label1->Text = L"A";
			this->label1->Click += gcnew System::EventHandler(this, &EqForm::label1_Click);
			// 
			// BYtxt
			// 
			this->BYtxt->BackColor = System::Drawing::SystemColors::MenuText;
			this->BYtxt->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BYtxt->ForeColor = System::Drawing::SystemColors::Menu;
			this->BYtxt->Location = System::Drawing::Point(220, 206);
			this->BYtxt->Name = L"BYtxt";
			this->BYtxt->Size = System::Drawing::Size(100, 28);
			this->BYtxt->TabIndex = 5;
			// 
			// Y0txt
			// 
			this->Y0txt->BackColor = System::Drawing::SystemColors::MenuText;
			this->Y0txt->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Y0txt->ForeColor = System::Drawing::SystemColors::Menu;
			this->Y0txt->Location = System::Drawing::Point(114, 206);
			this->Y0txt->Name = L"Y0txt";
			this->Y0txt->Size = System::Drawing::Size(100, 28);
			this->Y0txt->TabIndex = 4;
			// 
			// AYtxt
			// 
			this->AYtxt->BackColor = System::Drawing::SystemColors::MenuText;
			this->AYtxt->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AYtxt->ForeColor = System::Drawing::SystemColors::Menu;
			this->AYtxt->Location = System::Drawing::Point(8, 206);
			this->AYtxt->Name = L"AYtxt";
			this->AYtxt->Size = System::Drawing::Size(100, 28);
			this->AYtxt->TabIndex = 3;
			// 
			// BXtxt
			// 
			this->BXtxt->BackColor = System::Drawing::SystemColors::MenuText;
			this->BXtxt->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BXtxt->ForeColor = System::Drawing::SystemColors::Menu;
			this->BXtxt->Location = System::Drawing::Point(220, 128);
			this->BXtxt->Name = L"BXtxt";
			this->BXtxt->Size = System::Drawing::Size(100, 28);
			this->BXtxt->TabIndex = 2;
			// 
			// X0txt
			// 
			this->X0txt->BackColor = System::Drawing::SystemColors::MenuText;
			this->X0txt->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->X0txt->ForeColor = System::Drawing::SystemColors::Menu;
			this->X0txt->Location = System::Drawing::Point(114, 128);
			this->X0txt->Name = L"X0txt";
			this->X0txt->Size = System::Drawing::Size(100, 28);
			this->X0txt->TabIndex = 1;
			// 
			// AXtxt
			// 
			this->AXtxt->BackColor = System::Drawing::SystemColors::MenuText;
			this->AXtxt->Font = (gcnew System::Drawing::Font(L"Papyrus", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AXtxt->ForeColor = System::Drawing::SystemColors::Menu;
			this->AXtxt->Location = System::Drawing::Point(8, 128);
			this->AXtxt->Name = L"AXtxt";
			this->AXtxt->Size = System::Drawing::Size(100, 28);
			this->AXtxt->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(6, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 381);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox3->Location = System::Drawing::Point(344, 149);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(524, 444);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"THE RESULTS";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 412);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(512, 26);
			this->textBox3->TabIndex = 29;
			// 
			// table
			// 
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Location = System::Drawing::Point(874, 12);
			this->table->Name = L"table";
			this->table->Size = System::Drawing::Size(629, 581);
			this->table->TabIndex = 8;
			// 
			// EqForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->ClientSize = System::Drawing::Size(1515, 605);
			this->Controls->Add(this->table);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Name = L"EqForm";
			this->Text = L"EqForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
float E = 0.01;
int sel_eq = 0;
bool wefile = false;
//EQ1, EQ2, EQ3
float f(float x) {
	if (sel_eq == 1)
		return x * x * x + 2.28 * x * x - 1.934 * x - 3.907;
	if (sel_eq == 2)
		return x * x * x + 4.81 * x * x - 17.37 * x + 5.38;
	if (sel_eq == 3)
		return -(x * x * x) + 5.67 * x * x - 7.12 * x + 1.34;
}
float fd(float x) {
	if (sel_eq == 1)
		return 3 * x * x + 4.56 * x - 1.934;
	if (sel_eq == 2)
		return 3 * x * x + 9.62 * x - 17.37;
	if (sel_eq == 3)
		return -(3 * x * x) + 11.34 * x - 7.12;
}


//EQ4
float ff_4(float x, float y) {
	return 2 * x - sin(y - 0.5) - 1;
}
float gg_4(float x, float y) {
	return y + cos(x) - 1.5;
}
float xc_4(float y) {
	return (sin(y - 0.5) + 1) / 2;
}
float yc_4(float x) {
	return 1.5 - cos(x);
}

float dn11_4(float x, float y) {
	return 2;
}
float dn12_4(float x, float y) {
	return -cos(0.5 - y);
}
float dn21_4(float x, float y) {
	return -sin(x);
}
float dn22_4(float x, float y) {
	return 1;
}
//EQ5
float ff_5(float x, float y) {
	return sin(y+0.5)-x-1;
}
float gg_5(float x, float y) {
	return y+cos(x-2);
}
float xc_5(float y) {
	return sin(y+0.5)-1;
}
float yc_5(float x) {
	return -cos(x-2);
}

float dn11_5(float x, float y) {
	return -1;
}
float dn12_5(float x, float y) {
	return cos(y+0.5);
}
float dn21_5(float x, float y) {
	return sin(2-x);
}
float dn22_5(float x, float y) {
	return 1;
}


private: double to_double(System::String^ str) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
	std::string ss = chars;

	// Free the allocated memory for const char*
	System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
	std::istringstream iss(ss);
	double result;
	iss >> result;
	return result;
}
private: std::string to_normal(System::String^ str) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
	std::string ss = chars;
	return ss;
}
private: System::String^ to_system(std::string s) {
	array<Byte>^ bytes = gcnew array<Byte>(s.length());
	System::Runtime::InteropServices::Marshal::Copy((IntPtr)(char*)s.c_str(), bytes, 0, s.length());

	System::String^ managedString = System::Text::Encoding::UTF8->GetString(bytes);
	return managedString;
}
private: double min(double a, double b) {
	if (a < b) return a; else return b;
}
private: double max(double a, double b) {
	if (a > b) return a; else return b;
}
private: std::vector<std::string> split(std::string k) {
	std::vector<std::string> result;
	System::String^ s = to_system(k);
	array<System::String^>^ parts = s->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < parts->Length; i++)
	{
		System::String^ b = parts[i];
		result.push_back(to_normal(b));
	}

	return result;
}
private: void tableit(std::vector <std::string> a) {
	std::vector <std::vector<std::string> > v;
	std::fstream fout;
	if (wefile) fout.open("output.dat");
	int i, j;
	for (i = 0;i < a.size();i++) {
		v.push_back(split(a[i]));
	}
	table->ColumnHeadersVisible = true;
	table->Columns->Clear();
	for (j = 0;j < v[0].size();j++) {
		table->Columns->Add(to_system(v[0][j]), to_system(v[0][j]));
		if (wefile) fout << v[0][j] << '\t';
	}
	if (wefile) fout << '\n';
	for (i = 1;i < v.size();i++) {
		table->Rows->Add();
		for (j = 0;j < v[i].size();j++) {
			table->Rows[i-1]->Cells[j]->Value = to_system(v[i][j]);
			if (wefile) fout << v[i][j] << '\t';
		}
		if (wefile) fout << '\n';
	}
	if (wefile) fout.close();
}
std::pair <float, float> solven(float x, float y) {
	float aa, bb, cc, dd, ee, ff;
	if (sel_eq == 4) {
		aa = dn11_4(x, y);
		bb = dn12_4(x, y);
		cc = -ff_4(x, y);
		dd = dn21_4(x, y);
		ee = dn22_4(x, y);
		ff = -gg_4(x, y);
	}
	else {
		aa = dn11_5(x, y);
		bb = dn12_5(x, y);
		cc = -ff_5(x, y);
		dd = dn21_5(x, y);
		ee = dn22_5(x, y);
		ff = -gg_5(x, y);
	}

	float newx = 0;
	float newy = 0;

	if (aa == 0 || dd == 0) {
		if (aa == 0) {
			newy = cc / bb;
			newx = (ff - ee * newy) / dd;
		}
		else
			if (dd == 0) {
				newy = ff / ee;
				newx = (cc - bb * newy) / aa;
			}
		return std::make_pair(newx, newy);
	}

	if (bb == 0 || ee == 0) {
		if (bb == 0) {
			newx = cc / aa;
			newy = (ff - dd * newx) / ee;
		}
		else
			if (ee == 0) {
				newx = ff / dd;
				newy = (cc - aa * newx) / bb;
			}
		return std::make_pair(newx, newy);
	}


	if (aa != 0 && bb != 0 && dd != 0 && ee != 0) {
		newy = (aa * ff - cc * dd) / (aa * ee - bb * dd);
		newx = (cc - bb * newy) / aa;
		return std::make_pair(newx, newy);
	}
	return std::make_pair(newx, newy);
}
std::pair <float, float> newton_2(float xa, float xb, float ya, float yb) {
	std::vector <std::string> v;
	v.push_back("x y |x(k)-x(k-1)| |y(k)-y(k-1)|");
	float xp = xa;
	float x = xa;
	float yp = ya;
	float y = ya;
	int i = 0;
	do {
		xp = x;
		yp = y;
		std::pair <float, float> dxdy = solven(x, y);
		x = xp + dxdy.first;
		y = yp + dxdy.second;
		v.push_back(to_normal((x).ToString() + " " + (y).ToString() + " " + (x-xp).ToString() + " " + (y-yp).ToString()));
		i++;
	} while (fabs(x - xp) > E || fabs(y - yp) > E);
	textBox3->Text = "Iterations: " + i.ToString() + "; ";
	tableit(v);
	return std::make_pair(x, y);
}

float half_div(float a, float b) {
	std::vector <std::string> v;
	v.push_back("a b x f(a) f(b) f(x) |a-b|");
	float x = 0, i=0;
	do {
		x = (a + b) / 2;
		v.push_back(to_normal((a).ToString() +" "+ (b).ToString() + " " + (x).ToString() + " " + (f(a)).ToString() + " " + (f(b)).ToString() + " " + (f(x)).ToString() + " " + (fabs(a - b)).ToString()));
		i++;
		if (f(a) * f(x) < 0) b = x;
		else
			if (f(x) * f(b) < 0) a = x;
	} while (fabs(a - b) > E);
	textBox3->Text = "Iterations: " + i.ToString() + "; ";
	tableit(v);
	return x;
}
float slicing(float x0, float x1) {
	std::vector <std::string> v;
	v.push_back("ppx px x f(x) |x-px|");
	float i = 0;
	float xn = x1;
	float x = x0;
	float px = x0;
	do {
		px = x;
		x = xn;
		xn = x - (x - px) / (f(x) - f(px)) * f(x);
		v.push_back(to_normal((px).ToString() + " " + (x).ToString() + " " + (xn).ToString() + " " + (f(x)).ToString() + " " + (fabs(xn - x)).ToString()));
		i++;
	} while (fabs(xn - x) > E || f(xn) > E);
	textBox3->Text = "Iterations: " + i.ToString() + "; ";
	tableit(v);
	return xn;
}
float simple_iter(float a, float b) {
	std::vector <std::string> v;
	v.push_back("px x f(x) |x-px|");
	float lam = 1 / max(fabs(fd(a)), fabs(fd(b)));
	if (fd((a + b) / 2) > 0) lam = -lam;
	float xn = a;
	float x = a;
	float i = 0;
	do {
		x = xn;
		xn = xn + lam * f(x);
		v.push_back(to_normal((x).ToString() + " " + (xn).ToString() + " " + (f(xn)).ToString() + " " + (fabs(xn - x)).ToString()));
		i++;
	} while (fabs(xn - x) > E);
	textBox3->Text = "Iterations: " + i.ToString() + "; ";
	tableit(v);
	return xn;
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	E = to_double(EPStext->Text);
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: void drawitall(float top, float bottom, float left, float right, bool surround) {
	Graphics^ canvas = pictureBox1->CreateGraphics();
	Color c_black = Color::FromName("Black");
	Color c_white = Color::FromName("White");
	Color c_green = Color::FromName("Green");
	Color c_red = Color::FromName("Red");
	canvas->Clear(c_white);
	Pen ^greenPen = (gcnew Pen(c_green, 2.0));
	Pen^ redPen = (gcnew Pen(c_red, 1.0));
	Pen^ blackPen = (gcnew Pen(c_black, 1.0));

	Drawing::Font^ font = (gcnew Drawing::Font("Arial", 12));
	Brush^ brush = Brushes::Black;
	Brush^ brushr = Brushes::Red;

	SizeF textSize;

	float microrangex = 10;
	if (fabs(right - left) < 10) microrangex = 1;
	if (fabs(right - left) < 1) microrangex = 0.1;
	if (fabs(right - left) < 0.1) microrangex = 0.01;
	float microrangey = 10;
	if (fabs(top - bottom) < 10) microrangey = 1;
	if (fabs(top - bottom) < 1) microrangey = 0.1;
	if (fabs(top - bottom) < 0.1) microrangey = 0.01;

	top += microrangey*2;
	bottom -= microrangey * 2;
	left -= microrangex * 2;
	right += microrangex * 2;

	float x1 =  0;
	float x2 =  0;
	float y1 = -100;
	float y2 = 100;
	canvas->DrawLine(blackPen,
		(x1 - left) / (right - left) * pictureBox1->Width,
		(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
		(x2 - left) / (right - left) * pictureBox1->Width,
		(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);

	x1 = -100;
	x2 = 100;
	y1 = 0;
	y2 = 0;
	canvas->DrawLine(blackPen, 
		(x1 - left) / (right - left) * pictureBox1->Width, 
		(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
		(x2 - left) / (right - left) * pictureBox1->Width,
		(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);

	if (surround) {
		x1 = -100;
		x2 = 100;
		y1 = top-microrangey*2;
		y2 = bottom+microrangey * 2;
		canvas->DrawLine(redPen,
			(x1 - left) / (right - left) * pictureBox1->Width,
			(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
			(x2 - left) / (right - left) * pictureBox1->Width,
			(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height);

		textSize = canvas->MeasureString((left + microrangex * 2).ToString("F2"), font);
		canvas->DrawString((top - microrangey * 2).ToString("F2"), font, brushr,
			0 * pictureBox1->Width,
			(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height);

		canvas->DrawLine(redPen,
			(x1 - left) / (right - left) * pictureBox1->Width,
			(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height,
			(x2 - left) / (right - left) * pictureBox1->Width,
			(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);

		textSize = canvas->MeasureString((left + microrangex * 2).ToString("F2"), font);
		canvas->DrawString((bottom + microrangey * 2).ToString("F2"), font, brushr,
			0 * pictureBox1->Width,
			(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);
	}
	x1 = left + microrangex * 2;
	x2 = right - microrangex * 2;
	y1 = -100;
	y2 = 100;
	canvas->DrawLine(redPen,
		(x1 - left) / (right - left) * pictureBox1->Width,
		(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
		(x1 - left) / (right - left) * pictureBox1->Width,
		(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);

	textSize = canvas->MeasureString((left + microrangex * 2).ToString("F2"), font);
	canvas->DrawString((left + microrangex * 2).ToString("F2"), font, brushr,
		(x1 - left) / (right - left) * pictureBox1->Width,
		(1) * pictureBox1->Height - textSize.Height);

	canvas->DrawLine(redPen,
		(x2 - left) / (right - left) * pictureBox1->Width,
		(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
		(x2 - left) / (right - left) * pictureBox1->Width,
		(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);

	textSize = canvas->MeasureString((right - microrangex * 2).ToString("F2"), font);
	canvas->DrawString((right - microrangex * 2).ToString("F2"), font, brushr,
		(x2 - left) / (right - left) * pictureBox1->Width,
		(1) * pictureBox1->Height - textSize.Height);

	for (double x = -100; x <= 100; x += microrangex) {

		x1 = x;
		x2 = x;
		y1 = -microrangey/10;
		y2 = microrangey/10;
		canvas->DrawLine(blackPen,
			(x1 - left) / (right - left) * pictureBox1->Width,
			(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
			(x2 - left) / (right - left) * pictureBox1->Width,
			(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);
		textSize = canvas->MeasureString((x).ToString("F2"), font);
		canvas->DrawString((x).ToString("F2"), font, brush,
			(x1 - left) / (right - left) * pictureBox1->Width - textSize.Width / 2,
			(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height);
	}
	for (double y = -100; y <= 100; y += microrangey) {
		x1 = -microrangex/10;
		x2 = microrangex/10;
		y1 = y;
		y2 = y;
		canvas->DrawLine(blackPen,
			(x1 - left) / (right - left) * pictureBox1->Width,
			(1 - (y1 - bottom) / (top - bottom)) * pictureBox1->Height,
			(x2 - left) / (right - left) * pictureBox1->Width,
			(1 - (y2 - bottom) / (top - bottom)) * pictureBox1->Height);
		textSize = canvas->MeasureString((y).ToString("F2"), font);
		canvas->DrawString((y).ToString("F2"), font, brush,
			(x1 - left) / (right - left) * pictureBox1->Width,
			(1 - ((y1) - bottom) / (top - bottom)) * pictureBox1->Height-textSize.Height / 2);
	}

	if (sel_eq == 1 || sel_eq == 2 || sel_eq == 3) {
		float px = left;
		float py = f(px);
		for (float x = left+microrangex; x <= right + microrangex; x += microrangex/20) {
			float y = f(x);

			canvas->DrawLine(greenPen,
				(px - left) / fabs(right - left) * pictureBox1->Width,
				(1 - (py - bottom) / fabs(top - bottom)) * pictureBox1->Height,
				(x - left) / fabs(right - left) * pictureBox1->Width,
				(1 - (y - bottom) / fabs(top - bottom)) * pictureBox1->Height);

			px = x;
			py = y;
		}
	}
	if (sel_eq == 4){
		float px = left;
		float py = yc_4(px);
		for (float x = left + microrangex; x <= right + microrangex; x += microrangex / 20) {
			float y = yc_4(x);

			canvas->DrawLine(greenPen,
				(px - left) / fabs(right - left) * pictureBox1->Width,
				(1 - (py - bottom) / fabs(top - bottom)) * pictureBox1->Height,
				(x - left) / fabs(right - left) * pictureBox1->Width,
				(1 - (y - bottom) / fabs(top - bottom)) * pictureBox1->Height);

			px = x;
			py = y;
		}
		py = bottom;
		px = xc_4(py);
		for (float y = bottom + microrangey; y <= top+microrangey; y += microrangey / 5) {
			float x = xc_4(y);

			canvas->DrawLine(greenPen,
				(px - left) / fabs(right - left) * pictureBox1->Width,
				(1 - (py - bottom) / fabs(top - bottom)) * pictureBox1->Height,
				(x - left) / fabs(right - left) * pictureBox1->Width,
				(1 - (y - bottom) / fabs(top - bottom)) * pictureBox1->Height);

			px = x;
			py = y;
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (method->SelectedIndex) {
		case 0: {
			try {
				if (sel_eq > 3) {
					textBox3->Text = "Cannot use the slicing method on this equation.";
					break;
				}
				double x0 = to_double(X0txt->Text);
				double x1 = to_double(Y0txt->Text);
				int slt = 0;
				for (float k = x0;k <= x1;k += 0.1) {
					if (f(k) * f(k - 0.1) < 0) slt++;
				}
				if (slt == 0) {
					textBox3->Text = "This range contains no solutions.";
					break;
				}
				if (slt > 2) {
					textBox3->Text = "This range contains multiple solutions.";
					break;
				}
				float res = slicing(x0, x1);
				float fl = 999;
				float cei = -999;
				for (float k = x0;k <= x1;k += 0.1) {
					fl = min(fl, f(k));
					cei = max(cei, f(k));
				}
				drawitall(cei, fl, x0, x1, false);
				textBox3->Text += "Result: x = " + res.ToString();
			}
			catch (...) {
				textBox3->Text = "Invalid input.";
			}
			break;
		}
		case 1: {
			try{
				if (sel_eq > 3) {
					textBox3->Text = "Cannot use the half-splitting method on this equation.";
					break;
				}
				double a = to_double(AXtxt->Text);
				double b = to_double(BXtxt->Text);
				int slt = 0;
				for (float k = a;k <= b;k += 0.1) {
					if (f(k) * f(k - 0.1) < 0) slt++;
				}
				if (slt == 0) {
					textBox3->Text = "This range contains no solutions.";
					break;
				}
				if (slt > 2) {
					textBox3->Text = "This range contains multiple solutions.";
					break;
				}
				float res = half_div(a, b);
				float fl = 999;
				float cei = -999;
				for (float k = a;k <= b;k+=0.1) {
					fl = min(fl, f(k));
					cei = max(cei, f(k));
				}
				drawitall(cei, fl, a, b, false);
				textBox3->Text += "Result: x = " + res.ToString();
			}
			catch (...) {
				textBox3->Text = "Invalid input.";
			}
			break;
		}
		case 2: {
			try {
				if (sel_eq > 3) {
					textBox3->Text = "Cannot use the simple iterations method on this equation.";
					break;
				}
				double a = to_double(AXtxt->Text);
				double b = to_double(BXtxt->Text);
				int slt = 0;
				for (float k = a;k <= b;k += 0.1) {
					if (f(k) * f(k - 0.1) < 0) slt++;
				}
				if (slt == 0) {
					textBox3->Text = "This range contains no solutions.";
					break;
				}
				if (slt > 2) {
					textBox3->Text = "This range contains multiple solutions.";
					break;
				}
				float res = simple_iter(a, b);
				float fl = 999;
				float cei = -999;
				for (float k = a;k <= b;k+=0.1) {
					fl = min(fl, f(k));
					cei = max(cei, f(k));
				}
				drawitall(cei, fl, a, b, false);
				textBox3->Text += "Result: x = " + res.ToString();
				break;
			}
			catch (...) {
				textBox3->Text = "Method does not converge in this range.";
			}
			break;
		}
		case 3: {
			if (sel_eq < 4) {
				textBox3->Text = "Cannot use the newton method on this equation.";
				break;
			}
			double ax = to_double(AXtxt->Text);
			double bx = to_double(BXtxt->Text);
			double ay = to_double(AYtxt->Text);
			double by = to_double(BYtxt->Text);
			std::pair <float,float> res = newton_2(ax, bx, ay, by);
			drawitall(by, ay, ax, bx, true);
			textBox3->Text += "Result: x = " + res.first.ToString() + ", y = " + res.second.ToString();
			break;
		}
	}
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (method->SelectedIndex) {
		case 0: {
			AXtxt->Hide();
			AYtxt->Hide();
			BXtxt->Hide();
			BYtxt->Hide();
			X0txt->Show();
			Y0txt->Show();
			label5->Text = "X0";
			label6->Text = "X1";
			label4->Show();
			label11->Show();
			label6->Show();
			label10->Show();
			label3->Show();
			break;
		}
		case 1: {
			AXtxt->Show();
			AYtxt->Hide();
			BXtxt->Show();
			BYtxt->Hide();
			X0txt->Hide();
			Y0txt->Hide();
			label5->Text = "X0";
			label4->Hide();
			label11->Hide();
			label6->Hide();
			label10->Hide();
			label3->Hide();
			break;
		}
		case 2: {
			AXtxt->Show();
			AYtxt->Hide();
			BXtxt->Show();
			BYtxt->Hide();
			X0txt->Hide();
			Y0txt->Hide();
			label5->Text = "X0";
			label4->Hide();
			label11->Hide();
			label6->Hide();
			label10->Hide();
			label3->Hide();
			break;
		}
		case 3: {
			AXtxt->Show();
			AYtxt->Show();
			BXtxt->Show();
			BYtxt->Show();
			X0txt->Hide();
			Y0txt->Hide();
			label5->Text = "X";
			label6->Text = "Y";
			label4->Show();
			label11->Show();
			label6->Show();
			label10->Show();
			label3->Show();
			break;
		}
	}
}
private: System::Void eqrb1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sel_eq = 1;
	textBox3->Text = "Equation selected: " + (sel_eq).ToString();
}
private: System::Void eqrb2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sel_eq = 2;
	textBox3->Text = "Equation selected: " + (sel_eq).ToString();
}
private: System::Void eqrb3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sel_eq = 3;
	textBox3->Text = "Equation selected: " + (sel_eq).ToString();
}
private: System::Void eqrb4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sel_eq = 4;
	textBox3->Text = "Equation selected: " + (sel_eq).ToString();
}
private: System::Void eqrb5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	sel_eq = 5;
	textBox3->Text = "Equation selected: " + (sel_eq).ToString();
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (method->SelectedIndex) {
		wefile = 1;
		textBox3->Text = "The data will be written into output.dat";
	}
	else {
		wefile = 0;
		textBox3->Text = "The data will not be written into a file.";
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
