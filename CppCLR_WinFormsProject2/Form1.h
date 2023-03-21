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
	private: System::Windows::Forms::Button^ clalculeaza_cmp;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_cnp;
	private: System::Windows::Forms::TextBox^ afisaj_cnp;


	private: System::Windows::Forms::Button^ stergem_cmp;
	private: System::Windows::Forms::Button^ afisaj_data;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->clalculeaza_cmp = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->stergem_cmp = (gcnew System::Windows::Forms::Button());
			this->afisaj_data = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// clalculeaza_cmp
			// 
			this->clalculeaza_cmp->Location = System::Drawing::Point(74, 119);
			this->clalculeaza_cmp->Name = L"clalculeaza_cmp";
			this->clalculeaza_cmp->Size = System::Drawing::Size(86, 23);
			this->clalculeaza_cmp->TabIndex = 2;
			this->clalculeaza_cmp->Text = L"Calculeaza_cmp";
			this->clalculeaza_cmp->UseVisualStyleBackColor = true;
			this->clalculeaza_cmp->Click += gcnew System::EventHandler(this, &Form1::calculeaza_cmp_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(442, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Data";
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(61, 72);
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(314, 22);
			this->input_cnp->TabIndex = 4;
			this->input_cnp->TextChanged += gcnew System::EventHandler(this, &Form1::input_cmp_TextChanged);
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->Location = System::Drawing::Point(61, 170);
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->Size = System::Drawing::Size(314, 22);
			this->afisaj_cnp->TabIndex = 5;
			this->afisaj_cnp->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// stergem_cmp
			// 
			this->stergem_cmp->Location = System::Drawing::Point(266, 119);
			this->stergem_cmp->Name = L"stergem_cmp";
			this->stergem_cmp->Size = System::Drawing::Size(75, 23);
			this->stergem_cmp->TabIndex = 6;
			this->stergem_cmp->Text = L"Clear";
			this->stergem_cmp->UseVisualStyleBackColor = true;
			this->stergem_cmp->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// afisaj_data
			// 
			this->afisaj_data->Location = System::Drawing::Point(423, 169);
			this->afisaj_data->Name = L"afisaj_data";
			this->afisaj_data->Size = System::Drawing::Size(118, 23);
			this->afisaj_data->TabIndex = 7;
			this->afisaj_data->Text = L"afisam data";
			this->afisaj_data->UseVisualStyleBackColor = true;
			this->afisaj_data->Click += gcnew System::EventHandler(this, &Form1::afisaj_data_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 323);
			this->Controls->Add(this->afisaj_data);
			this->Controls->Add(this->stergem_cmp);
			this->Controls->Add(this->afisaj_cnp);
			this->Controls->Add(this->input_cnp);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->clalculeaza_cmp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		input_cnp->Clear();
		afisaj_cnp->Clear();
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void afisaj_data_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime today = DateTime::Now;
		label1->Text = today.ToString("dd/mm/yyyy");
	};
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void calculeaza_cmp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (input_cnp->Text->Length == 0)
		{
			MessageBox::Show("Introduceti cnp-ul,Erroare");
			return;
		}
		else
		{
			String^ cnp = input_cnp->Text;
			int S = Int32::Parse(cnp->Substring(0, 1));
			int an = Int32::Parse(cnp->Substring(1, 2));
			int luna = Int32::Parse(cnp->Substring(3, 2));
			int zi = Int32::Parse(cnp->Substring(5, 2));

			DateTime azi = DateTime::Now;
			int W=0,se=0;
			switch (S)
			{
			case 1: {W = 1900; se = 0;  break; }
			case 2: {W = 1900; se = 1; break; }
			case 3: {W = 1800; se = 0;  break; }
			case 4: {W = 1800; se = 1; break; }
			case 5: {W = 2000; se = 0; break; }
			case 6: {W = 2000; se = 1; break; }
			}
			int varsta = azi.Year -W -an;
			if (luna > azi.Month || luna == azi.Month && zi == azi.Day)
				varsta--;
			if(se==0)
				afisaj_cnp->Text = "Data nasterii: " + zi.ToString() + "/" + luna.ToString() + "/" + (an+W).ToString() + " Varsta " + varsta.ToString()+ " Sex:M";
			else
				afisaj_cnp->Text = "Data nasterii: " + zi.ToString() + "/" + luna.ToString() + "/" + (an+W).ToString() + " Varsta " + varsta.ToString() + " Sex:F";
		}	
	}

	private: System::Void input_cmp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}