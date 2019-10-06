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
	/// Сводка для EditdDocument
	/// </summary>
	public ref class EditdDocument : public System::Windows::Forms::Form
	{
	public:
		EditdDocument(void)
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
		~EditdDocument()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 97);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditdDocument::Button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Номер накладной";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Номер договора";
			// 
			// EditdDocument
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 138);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EditdDocument";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактирование документа";
			this->Load += gcnew System::EventHandler(this, &EditdDocument::EditdDocument_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Document^ doc;
	public: Magazin^ EditDocument_Shown(Magazin^ magz, int id) {
		for (int i = 0; i < magz->ArrayDocument->Count; i++)
		{
			if (magz->ArrayDocument[i]->id == id) {
				doc = magz->ArrayDocument[i];
				break;
			}
		}
		if (doc != nullptr) {
			this->ShowDialog();
			for (int i = 0; i < magz->ArrayDocument->Count; i++)
			{
				if (magz->ArrayDocument[i]->id == id) {
					magz->ArrayDocument[i] = doc;
					break;
				}
			}
		}
		return magz;
	}

	private: System::Void EditdDocument_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = doc->NumberDogovor;
		textBox2->Text = doc->Naklodnaya;
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		doc->NumberDogovor = textBox1->Text;
		doc->Naklodnaya = textBox2->Text;
		this->Close();
	}
};
}
