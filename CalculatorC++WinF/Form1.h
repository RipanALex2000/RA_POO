#pragma once
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ M;
		int op;
		void f()
		{
			M = AF->Text;
			AF->Clear();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::TextBox^ AF;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->AF = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(342, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L" +";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 197);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L" x^2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(122, 197);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 69);
			this->button4->TabIndex = 3;
			this->button4->Text = L" x^y";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(232, 197);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 69);
			this->button5->TabIndex = 4;
			this->button5->Text = L" %";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(342, 122);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 69);
			this->button6->TabIndex = 5;
			this->button6->Text = L" <[x]";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(342, 270);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 69);
			this->button7->TabIndex = 6;
			this->button7->Text = L" -";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 272);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(104, 69);
			this->button8->TabIndex = 7;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(122, 272);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(104, 69);
			this->button9->TabIndex = 8;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(232, 272);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(104, 69);
			this->button10->TabIndex = 9;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Red;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(12, 122);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(104, 69);
			this->button11->TabIndex = 10;
			this->button11->Text = L" Exit";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(342, 345);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(104, 69);
			this->button12->TabIndex = 11;
			this->button12->Text = L" *";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(12, 347);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(104, 69);
			this->button13->TabIndex = 12;
			this->button13->Text = L"4";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(122, 347);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(104, 69);
			this->button14->TabIndex = 13;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(232, 347);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(104, 69);
			this->button15->TabIndex = 14;
			this->button15->Text = L"6";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Red;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(122, 122);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(104, 69);
			this->button16->TabIndex = 15;
			this->button16->Text = L"More";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(342, 422);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(104, 69);
			this->button17->TabIndex = 16;
			this->button17->Text = L" /";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(12, 422);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(104, 69);
			this->button18->TabIndex = 17;
			this->button18->Text = L"7";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(122, 422);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(104, 69);
			this->button19->TabIndex = 18;
			this->button19->Text = L"8";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(232, 422);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(104, 69);
			this->button20->TabIndex = 19;
			this->button20->Text = L"9";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Red;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(232, 122);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(104, 69);
			this->button21->TabIndex = 20;
			this->button21->Text = L" CC";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(342, 497);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(104, 69);
			this->button22->TabIndex = 21;
			this->button22->Text = L" =";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(12, 497);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(104, 69);
			this->button23->TabIndex = 22;
			this->button23->Text = L" -/+";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(122, 497);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(104, 69);
			this->button24->TabIndex = 23;
			this->button24->Text = L"0";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(232, 497);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(104, 69);
			this->button25->TabIndex = 24;
			this->button25->Text = L" .";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Form1::button25_Click);
			// 
			// AF
			// 
			this->AF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AF->Location = System::Drawing::Point(12, 34);
			this->AF->Multiline = true;
			this->AF->Name = L"AF";
			this->AF->Size = System::Drawing::Size(434, 65);
			this->AF->TabIndex = 26;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(343, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L" +";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Red;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(343, 122);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(104, 69);
			this->button26->TabIndex = 5;
			this->button26->Text = L" <[x]";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(343, 270);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(104, 69);
			this->button27->TabIndex = 6;
			this->button27->Text = L" -";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Red;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(13, 122);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(104, 69);
			this->button28->TabIndex = 10;
			this->button28->Text = L" Exit";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(343, 345);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(104, 69);
			this->button29->TabIndex = 11;
			this->button29->Text = L" *";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(343, 422);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(104, 69);
			this->button30->TabIndex = 16;
			this->button30->Text = L" /";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(343, 497);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(104, 69);
			this->button31->TabIndex = 21;
			this->button31->Text = L" =";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(342, 195);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(104, 69);
			this->button32->TabIndex = 1;
			this->button32->Text = L" +";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Red;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(342, 122);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(104, 69);
			this->button33->TabIndex = 5;
			this->button33->Text = L" <[x]";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(342, 270);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(104, 69);
			this->button34->TabIndex = 6;
			this->button34->Text = L" -";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Red;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(12, 122);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(104, 69);
			this->button35->TabIndex = 10;
			this->button35->Text = L" Exit";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(342, 345);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(104, 69);
			this->button36->TabIndex = 11;
			this->button36->Text = L" *";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(342, 422);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(104, 69);
			this->button37->TabIndex = 16;
			this->button37->Text = L" /";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(342, 497);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(104, 69);
			this->button38->TabIndex = 21;
			this->button38->Text = L" =";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(342, 197);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(104, 69);
			this->button39->TabIndex = 1;
			this->button39->Text = L" +";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::Red;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(342, 122);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(104, 69);
			this->button40->TabIndex = 5;
			this->button40->Text = L" <[x]";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(342, 270);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(104, 69);
			this->button41->TabIndex = 6;
			this->button41->Text = L" -";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::Red;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(12, 122);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(104, 69);
			this->button42->TabIndex = 10;
			this->button42->Text = L" Exit";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(342, 347);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(104, 69);
			this->button43->TabIndex = 11;
			this->button43->Text = L" *";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(342, 422);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(104, 69);
			this->button44->TabIndex = 16;
			this->button44->Text = L" /";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(342, 497);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(104, 69);
			this->button45->TabIndex = 21;
			this->button45->Text = L" =";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(459, 575);
			this->Controls->Add(this->AF);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Name = L"Form1";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		AF->Text = AF->Text + "2";
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	     AF->Text = AF->Text + "1";
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "3";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "4";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "5";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "6";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "7";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "8";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "9";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	f();
	op = 1;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + "%";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ r;
	r = AF -> Text;
	AF->Text = (r->Substring(0, r->Length - 1));
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	f();
	op = 2;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	f();
	op = 3;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	f();
	op = 1;

}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Clear();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	Double x, y;
	x = Double::Parse(M);
	y = Double::Parse(AF->Text);
	switch (op)
	{
	case 1: { AF->Text = (x + y).ToString(); break; }
	case 2: {  AF->Text = (x - y).ToString(); break; }
	case 3: {  AF->Text = (x * y).ToString(); break; }
	case 4: {  AF->Text = (x / y).ToString(); break; }

	}
	
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	AF->Text = AF->Text + ".";
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
