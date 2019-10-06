#pragma once
#include "Product.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditProduct
	/// </summary>
	public ref class EditProduct : public System::Windows::Forms::Form
	{
	public:
		EditProduct(void)
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
		~EditProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:



	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditProduct::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Наименование";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(126, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(146, 20);
			this->textBox1->TabIndex = 9;
			// 
			// EditProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 89);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"EditProduct";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditProduct";
			this->Load += gcnew System::EventHandler(this, &EditProduct::EditProduct_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Product^ pd;
	public: Magazin^ EditProduct_Shown(Magazin^ magz, int id) {
		for (int i = 0; i < magz->ArrayProduct->Count; i++)
		{
			if (magz->ArrayProduct[i]->id == id)
			{
				pd = magz->ArrayProduct[i];
				break;
			}
		}
		if (pd != nullptr)
		{
			this->ShowDialog();
			for (int i = 0; i < magz->ArrayProduct->Count; i++)
			{
				if (magz->ArrayProduct[i]->id == id)
				{
					magz->ArrayProduct[i] = pd;
					break;
				}
			}
		}
		return magz;
	}

	private: System::Void EditProduct_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = pd->Name;
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//сделать проверку введенных данных	
		pd->Name = textBox1->Text;
		this->Close();
	}
	};
}
