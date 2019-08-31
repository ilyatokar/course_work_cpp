#pragma once
#include "Magazin.h"
#include "Product.h"
#include "Provider.h"
#include "Document.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Newtonsoft::Json;
	using namespace Newtonsoft::Json::Linq;

	/// <summary>
	/// Сводка для AddComing
	/// </summary>
	public ref class AddComing : public System::Windows::Forms::Form
	{
	public:
		AddComing(void)
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
		~AddComing()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddComing::Button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(179, 20);
			this->textBox3->TabIndex = 24;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddComing::TextBox3_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 20);
			this->textBox1->TabIndex = 22;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddComing::TextBox1_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(93, 74);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(179, 21);
			this->comboBox3->TabIndex = 21;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(93, 47);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(179, 21);
			this->comboBox2->TabIndex = 20;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(93, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Стоимость";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 104);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Колличество";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Документы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Поставщик";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Товар";
			// 
			// AddComing
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 196);
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
			this->Name = L"AddComing";
			this->Text = L"AddComing";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Coming^ coming;
	public: Magazin^ magaz;

	public:  Magazin^ AddComing_Shown(Magazin^ m) {
		if (m->ArrayDocument->Count == 0 ||
			m->ArrayProduct->Count == 0 ||
			m->ArrayProvider->Count == 0
			) {
			MessageBox::Show("Товары, Документы, Постащики не должны быть пустыми!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return m;
		}
		this->magaz = m;
		//добавление элементов в combobox
		for each (Product^ item in this->magaz->ArrayProduct)
		{
			comboBox1->Items->Add(item->Name);
			comboBox1->SelectedIndex = 0;
		}
		for each (Provider^ item in this->magaz->ArrayProvider)
		{
			comboBox2->Items->Add(item->Name);
			comboBox2->SelectedIndex = 0;
		}
		for each (Document^ item in this->magaz->ArrayDocument)
		{
			comboBox3->Items->Add(item->NumberDogovor);
			comboBox3->SelectedIndex = 0;
		}
		this->ShowDialog();
		return this->magaz;
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" &&
			textBox3->Text != "")
		{
			int id = 1;
			if (magaz->ArrayComing->Count != 0) {
				id = (int)magaz->ArrayComing[magaz->ArrayComing->Count - 1]->id;
				id = id + 1;
			}
			coming = gcnew Coming();
			coming->id = id;
			coming->objProduct	= getObjProductByName(comboBox1->SelectedItem->ToString());
			coming->objProvider = getObjProviderByName(comboBox2->SelectedItem->ToString());
			coming->objDocument = getObjDocumentByNumberDogovor(comboBox3->SelectedItem->ToString());
			coming->count = Convert::ToInt32(textBox1->Text);
			coming->price = Convert::ToInt32(textBox3->Text);
			magaz->ArrayComing->Add(coming);
			Console::WriteLine(JsonConvert::SerializeObject(magaz));
			this->Close();
		}
		else {
			MessageBox::Show("Неправильно введены данные", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: Product^ getObjProductByName(String^ name) {
		for each (Product^ item in this->magaz->ArrayProduct)
		{
			if (item->Name == name)
				return item;
		}
		return nullptr;
	}

	private: Provider^ getObjProviderByName(String^ name) {
		for each (Provider^ item in this->magaz->ArrayProvider)
		{
			if (item->Name == name)
				return item;
		}
		return nullptr;
	}

	private: Document^ getObjDocumentByNumberDogovor(String^ ndog) {
		for each (Document ^ item in this->magaz->ArrayDocument)
		{
			if (item->NumberDogovor == ndog)
				return item;
		}
		return nullptr;
	}
private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		unsigned long number = Convert::ToInt32(textBox3 ->Text);
	}
	catch (FormatException^ e)
	{
		MessageBox::Show("В поле стоимость допусщена ошибка", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
