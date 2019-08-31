#pragma once
#include "Document.h"
#include "Magazin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddDocument
	/// </summary>
	public ref class AddDocument : public System::Windows::Forms::Form
	{
	public:
		AddDocument(void)
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
		~AddDocument()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номер договора";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Номер накладной";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddDocument::Button1_Click);
			// 
			// AddDocument
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 133);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddDocument";
			this->Text = L"Добавление документов";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: Document^ doc;
		public: Magazin^ magz;
		public: Magazin^ AddDocument_Shown(Magazin^ m) {
			this->magz = m;
			this->ShowDialog();	
			return this->magz;
		}

		private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
			int id = 1;
			if (textBox1->Text != "" &&
				textBox2->Text != "" ) {

				if (magz->ArrayDocument->Count != 0) {
					id = (int)magz->ArrayDocument[magz->ArrayDocument->Count - 1]->id;
					id = id + 1;
				}
				doc = gcnew Document();
				doc->id = id;
				doc->NumberDogovor = textBox1->Text;
				doc->Naklodnaya = textBox2->Text;
				magz->ArrayDocument->Add(doc);
				this->Close();

			}
			else {
				MessageBox::Show("Неправильно введены данные", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
};
}
