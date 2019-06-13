#pragma once
#include "Magazin.h"
#include "MyForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Newtonsoft::Json;
	using namespace Newtonsoft::Json::Linq;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� addMagazin
	/// </summary>
	public ref class addMagazin : public System::Windows::Forms::Form
	{
	private: MyForm^ form;
	public: addMagazin(MyForm^ form)
		{
			InitializeComponent();
			this->form = form;
			//
			//TODO: �������� ��� ������������
			//
		}

	

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addMagazin::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
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
			this->label1->Text = L"������� ��������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addMagazin::Button2_Click);
			// 
			// addMagazin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 121);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"addMagazin";
			this->Text = L"addMagazin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/// <summary>
	/// ����� ��� ���������� ������ �������� 
	/// </summary>
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "")
		{
			int id = 1;
			String^ fileName = Application::StartupPath + "/db/magazins.json";
			
			FileStream^ fileReader = gcnew FileStream(fileName, FileMode::OpenOrCreate);
			StreamReader^ reader = gcnew StreamReader(fileReader);
			
			String^ jsonstr = reader->ReadLine();
			
			reader->Close();
			fileReader->Close();
			
			List<Magazin^>^ data;
			if (!String::IsNullOrEmpty(jsonstr))
			{
				data = JsonConvert::DeserializeObject<List<Magazin^>^>(jsonstr);
				id = data[data->Count - 1]->id + 1;
			}
			else
			{
				data = gcnew List<Magazin^>();
			}

			data->Add(gcnew Magazin(id, textBox1->Text));

			String^ str = JsonConvert::SerializeObject(data);

			FileStream^ fileWriter = gcnew FileStream(fileName, FileMode::OpenOrCreate);
			StreamWriter^ writer = gcnew StreamWriter(fileWriter);

			writer->Write(str);

			writer->Close();
			fileWriter->Close();

			this->Close();
		}
		else {
			MessageBox::Show("���� ������� ��������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ Id = gcnew ListViewItem();
		Id->Text = "1";
		ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
		Name->Text = L"������� 1";
		Id->SubItems->Add(Name);
		this->form->listView1->Items->Add(Id);
	}
};



}
