#pragma once
#include "ProjectClass.h"
#include <iostream>
#include <Windows.h>
namespace LAba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ xx;
	private: System::Windows::Forms::TextBox^ yy;
	private: System::Windows::Forms::TextBox^ zz;
	private: System::Windows::Forms::TextBox^ aa;
	private: System::Windows::Forms::TextBox^ bb;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	protected:

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->xx = (gcnew System::Windows::Forms::TextBox());
			this->yy = (gcnew System::Windows::Forms::TextBox());
			this->zz = (gcnew System::Windows::Forms::TextBox());
			this->aa = (gcnew System::Windows::Forms::TextBox());
			this->bb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(226, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������ ����� x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"������ ����� y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"������ ����� z";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"�������� a";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"�������� b";
			// 
			// xx
			// 
			this->xx->Location = System::Drawing::Point(219, 55);
			this->xx->Name = L"xx";
			this->xx->Size = System::Drawing::Size(115, 22);
			this->xx->TabIndex = 6;
			// 
			// yy
			// 
			this->yy->Location = System::Drawing::Point(219, 91);
			this->yy->Name = L"yy";
			this->yy->Size = System::Drawing::Size(115, 22);
			this->yy->TabIndex = 7;
			// 
			// zz
			// 
			this->zz->Location = System::Drawing::Point(219, 131);
			this->zz->Name = L"zz";
			this->zz->Size = System::Drawing::Size(115, 22);
			this->zz->TabIndex = 8;
			// 
			// aa
			// 
			this->aa->Location = System::Drawing::Point(219, 165);
			this->aa->Name = L"aa";
			this->aa->Size = System::Drawing::Size(115, 22);
			this->aa->TabIndex = 9;
			// 
			// bb
			// 
			this->bb->Location = System::Drawing::Point(219, 204);
			this->bb->Name = L"bb";
			this->bb->Size = System::Drawing::Size(115, 22);
			this->bb->TabIndex = 10;
			this->bb->TextChanged += gcnew System::EventHandler(this, &MyForm::bb_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label6->Location = System::Drawing::Point(11, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(580, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"���� �������� �������� �������� ������� a(x,y,z,b) i b(x,y,z)";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(413, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 24);
			this->button2->TabIndex = 12;
			this->button2->Text = L"����� ��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 337);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->bb);
			this->Controls->Add(this->aa);
			this->Controls->Add(this->zz);
			this->Controls->Add(this->yy);
			this->Controls->Add(this->xx);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = System::Convert::ToDouble(xx->Text);
		double y = System::Convert::ToDouble(yy->Text);
		double z = System::Convert::ToDouble(zz->Text);
		ProjectClass Zavd;
		Zavd.Fn_b(x, y, z);
		Zavd.Fn_a(x, y, z);
		aa->Text = System::Convert::ToString(Zavd.geta());
		bb->Text = System::Convert::ToString(Zavd.getb());
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AllocConsole();
		freopen("CONOUT$", "w", stdout);
		double y = System::Convert::ToDouble(yy->Text);
		double z = System::Convert::ToDouble(zz->Text);
		ProjectClass result;
		result.Fn_res(y, z);
	}
	private: System::Void bb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

