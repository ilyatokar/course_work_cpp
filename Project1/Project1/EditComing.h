#pragma once
#include "Coming.h"
#include "Magazin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditComing
	/// </summary>
	public ref class EditComing : public System::Windows::Forms::Form
	{
	public:
		EditComing(void)
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
		~EditComing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Товар";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Поставщик";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Документы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Колличество";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Стоимость";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(93, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(93, 50);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(179, 21);
			this->comboBox2->TabIndex = 7;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(93, 77);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(179, 21);
			this->comboBox3->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 104);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EditComing::TextBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &EditComing::TextBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditComing::Button1_Click);
			// 
			// EditComing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 215);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditComing";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditComing";
			this->Load += gcnew System::EventHandler(this, &EditComing::EditComing_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Coming^ coming;
	public: Magazin^ magaz;
	public: Magazin^ EditComing_Shown(Magazin^ magaz, int id) {
		this->magaz = magaz;
		for (int i = 0; i < magaz->ArrayComing->Count; i++)
		{
			if (magaz->ArrayComing[i]->id == id) {
				coming = magaz->ArrayComing[i];
				break;
			}
		}
		if (coming != nullptr) {
			this->ShowDialog();
			for (int i = 0; i < magaz->ArrayComing->Count; i++)
			{
				if (magaz->ArrayComing[i]->id == id) {
					magaz->ArrayComing[i] = coming;
					break;
				}
			}
		}
		return this->magaz;
	}

	private: System::Void EditComing_Load(System::Object^ sender, System::EventArgs^ e) {
		for each (Product ^ item in this->magaz->ArrayProduct)
		{
			comboBox1->Items->Add(item->Name);
			if (item == coming->objProduct) {
				comboBox1->SelectedIndex = this->magaz->ArrayProduct->IndexOf(item);
			}
		}
		for each (Provider ^ item in this->magaz->ArrayProvider)
		{
			comboBox2->Items->Add(item->Name);
			if (item == coming->objProvider) {
				comboBox2->SelectedIndex = this->magaz->ArrayProvider->IndexOf(item);
			}
			
		}
		for each (Document ^ item in this->magaz->ArrayDocument)
		{
			comboBox3->Items->Add(item->NumberDogovor);
			if (item == coming->objDocument) {
				comboBox3->SelectedIndex = this->magaz->ArrayDocument->IndexOf(item);
			}
		}
		textBox1->Text = coming->count.ToString();
		textBox3->Text = coming->price.ToString();
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" &&
			textBox3->Text != "")
		{
			coming->objProduct = this->magaz->getObjProductByName(comboBox1->SelectedItem->ToString());
			coming->objProvider = this->magaz->getObjProviderByName(comboBox2->SelectedItem->ToString());
			coming->objDocument = this->magaz->getObjDocumentByNumberDogovor(comboBox3->SelectedItem->ToString());
			coming->count = Convert::ToInt32(textBox1->Text);
			coming->price = Convert::ToInt32(textBox3->Text);
		}
		this->Close();
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

	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			unsigned long number = Convert::ToInt32(textBox3->Text);
		}
		catch (FormatException^ e)
		{
			MessageBox::Show("В поле стоимость допусщена ошибка", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

};
}
