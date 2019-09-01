#pragma once
#include "Magazin.h"
#include "Consumption.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddConsumption
	/// </summary>
	public ref class AddConsumption : public System::Windows::Forms::Form
	{
	public:
		AddConsumption(void)
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
		~AddConsumption()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddConsumption::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddConsumption::TextBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(96, 17);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(178, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Колличество";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Товар";
			// 
			// AddConsumption
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 131);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(300, 166);
			this->MinimumSize = System::Drawing::Size(300, 166);
			this->Name = L"AddConsumption";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddConsumption";
			this->Load += gcnew System::EventHandler(this, &AddConsumption::AddConsumption_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Magazin^ magaz;
	private: Consumption^ consumption;
	public: Magazin^ AddConsumption_Shown(Magazin^ magaz) {
		this->magaz = magaz;
		this->ShowDialog();
		return this->magaz;

	}
	private: System::Void AddConsumption_Load(System::Object^ sender, System::EventArgs^ e) {
		for each (Product ^ item in this->magaz->ArrayProduct)
		{
			comboBox1->Items->Add(item->Name);
			comboBox1->SelectedIndex = 0;
		}
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "")
		{
			int id = 1;
			if (magaz->ArrayConsumption->Count != 0) {
				id = (int)magaz->ArrayConsumption[magaz->ArrayConsumption->Count - 1]->id;
				id = id + 1;
			}
			consumption = gcnew Consumption();
			consumption->id = id;
			consumption->objProduct = magaz->getObjProductByName(comboBox1->SelectedItem->ToString());
			consumption->count = Convert::ToInt32(textBox1->Text);
			magaz->ArrayConsumption->Add(consumption);
			this->Close();
		}
		else {
			MessageBox::Show("Неправильно введены данные", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			unsigned long number = Convert::ToInt32(textBox1->Text);
		}
		catch (FormatException^ e)
		{
			MessageBox::Show("В поле колличество допусщена ошибка", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
};
}
