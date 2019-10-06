#pragma once
#include "Provider.h"
#include "Magazin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� EditProvider
	/// </summary>
	public ref class EditProvider : public System::Windows::Forms::Form
	{
	public:
		EditProvider(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~EditProvider()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:







	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditProvider::Button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"�����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"�����";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"������������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(116, 80);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 20);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 20);
			this->textBox1->TabIndex = 14;
			// 
			// EditProvider
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 165);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"EditProvider";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EditProvider";
			this->Load += gcnew System::EventHandler(this, &EditProvider::EditProvider_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Provider^ Prov;
	public: Magazin^ EditProvider_Shown(Magazin^ magz, int id) {
		for (int i = 0; i < magz->ArrayProvider->Count; i++)
		{
			if (magz->ArrayProvider[i]->id == id)
			{
				Prov = magz->ArrayProvider[i];
				break;
			}
		}
		if (Prov != nullptr)
		{
			this->ShowDialog();
			for (int i = 0; i < magz->ArrayProvider->Count; i++)
			{
				if (magz->ArrayProvider[i]->id == id)
				{
					magz->ArrayProvider[i] = Prov;
					break;
				}
			}
		}
		return magz;
	}
	private: System::Void EditProvider_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = Prov->Name;
		textBox2->Text = Prov->Addres;
		textBox3->Text = Prov->Comment;
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Prov->Name = textBox1->Text;
		Prov->Addres = textBox2->Text;
		Prov->Comment = textBox3->Text;
		this->Close();
	}
};
}
