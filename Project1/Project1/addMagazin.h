#pragma once
#include "json.hpp"
#include <fstream>
#include <iostream>
#include <string>

#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для addMagazin
	/// </summary>
	public ref class addMagazin : public System::Windows::Forms::Form
	{
	public:
		addMagazin(void)
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
		~addMagazin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addMagazin::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите название";
			this->label2->Visible = false;
			// 
			// addMagazin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 121);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"addMagazin";
			this->Text = L"addMagazin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		using json = nlohmann::json;
		int id = 0;
		
		std::fstream file("db/magazins.json");
		if (!file.is_open())
			return;
		json j;
	
		file >> j;
		if (j.size()) {
		
			id = j[j.size()-1]["id"];
		}
		file.close();
		json magazin;
		magazin["id"] = id + 1;
		System::String^ managedString = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(managedString);
		
		magazin["name"] = L"Тестовый магазин";
		
		j.push_back(magazin);

		std::fstream outFile("db/magazins.json");
		outFile << j << std::endl;
		this->Close();
	}
};
}
