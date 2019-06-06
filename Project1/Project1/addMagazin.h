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
	/// —водка дл€ addMagazin
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
		/// ќсвободить все используемые ресурсы.
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
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->button1->Text = L"ƒобавить";
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
			this->label1->Text = L"¬ведите название";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"¬ведите название";
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
		/*int id = 0;

		std::ifstream i("db/magazins.json", std::ios::out | std::ios::app);
		if (!i.is_open())
			return;
		json j;
		i >> j;
		i.close();
		json magazin;
		magazin["id"] = id + 1;
		System::String^ managedString = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(managedString);
		magazin["name"] = 1;
		j.push_back(magazin);
		std::cout << j.dump() << std::endl;
		std::ofstream outFile("db/magazins.json");
		outFile << j << std::endl;
		outFile.close();*/
		System::String^ managedString = textBox1->Text;
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(managedString);
		json magazin;
		magazin["id"] = 1;
		std::wstring wname(name.begin(), name.end());
		magazin["name"] = wname;
		json j;
		j.push_back(magazin);
		j.push_back(magazin);
		j.push_back(magazin);
		std::cout << j.dump() << std::endl;
		std::fstream jsonFile("db/magazins.json", std::ios::out |std::ios::app);
		jsonFile << j << std::endl;
		jsonFile.close();
		String^ str3 = gcnew String(this->converWstringToString(wname));
		textBox1->Text = str3;
		std::cout << this->converWstringToString(wname) << std::endl;
		//this->Close();
	}

	private: std::string converWstringToString(std::wstring str) {
		const std::locale locale("");
		typedef std::codecvt<wchar_t, char, std::mbstate_t> converter_type;
		const converter_type& converter = std::use_facet<converter_type>(locale);
		std::vector<char> to(str.length() * converter.max_length());
		std::mbstate_t state;
		const wchar_t* from_next;
		char* to_next;
		const converter_type::result result = converter.out(state, str.data(), str.data() + str.length(), from_next, &to[0], &to[0] + to.size(), to_next);
		std::string s(&to[0], to_next);
		return s;
	}
};
}
