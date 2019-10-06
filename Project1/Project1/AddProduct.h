#pragma once
#include "Product.h"
#include "Magazin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddProduct
	/// </summary>
	public ref class AddProduct : public System::Windows::Forms::Form
	{
	public:
		AddProduct(void)
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
		~AddProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Наименование";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddProduct::Button1_Click);
			// 
			// AddProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 85);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"AddProduct";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddProduct";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Product^ pd;
	public: Magazin^ magz;
	public: Magazin^ AddProduct_Shown(Magazin^ arr) {
		this->magz = arr;
		this->ShowDialog();
		//сделать проверку на cуществующий элемент
		return this->magz;
	}

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = 1;	
		if (textBox1->Text != "") {
			if (magz->ArrayProduct->Count != 0) {
				id = (int)magz->ArrayProduct[magz->ArrayProduct->Count - 1]->id;
				id = id + 1;
			}
			//сделать проверку на введенные данные
			pd = gcnew Product();	
			pd->id = id;
			pd->Name = textBox1->Text;
			magz->ArrayProduct->Add(pd);
			this->Close();
		}
		else {
			MessageBox::Show("Неправильно введены данные", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	};
}
