#pragma once
#include "Header.h"
namespace Kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ num1;
	private: System::Windows::Forms::TextBox^ num2;
	private: System::Windows::Forms::TextBox^ num3;
	private: System::Windows::Forms::TextBox^ num4;
	private: System::Windows::Forms::TextBox^ num5;














	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->num4 = (gcnew System::Windows::Forms::TextBox());
			this->num5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(140, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Результат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть початкові обмеження";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Х0 =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"У0 =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 201);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Min";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Min у точці";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(110, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Х";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(218, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"У";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(97, 51);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(58, 20);
			this->num1->TabIndex = 8;
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(97, 81);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(58, 20);
			this->num2->TabIndex = 9;
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(66, 198);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(96, 20);
			this->num3->TabIndex = 10;
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(130, 237);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(70, 20);
			this->num4->TabIndex = 11;
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(239, 237);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(75, 20);
			this->num5->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 293);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
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
		int number = System::Convert::ToDouble(num1->Text);
		int number2 = System::Convert::ToDouble(num2->Text);
		double func = result(number, number2);
		double func1 = Getx(number, number2);
		double func2 = Gety(number, number2);
		num3->Text = System::Convert::ToString(func);
		num4->Text = System::Convert::ToString(func1);
		num5->Text = System::Convert::ToString(func2);
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
