#pragma once
#include "MyForm.h"




namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// ������ ��� Providers
	/// </summary>
	public ref class Providers : public System::Windows::Forms::Form
	{
	public:
		
		Providers(void)
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
		~Providers()
		{
			if (components)
			{
				delete components;
			}
		};
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ providersToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->providersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->providersToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// providersToolStripMenuItem
			// 
			this->providersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->addToolStripMenuItem });
			this->providersToolStripMenuItem->Name = L"providersToolStripMenuItem";
			this->providersToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->providersToolStripMenuItem->Text = L" ����������";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->addToolStripMenuItem->Text = L"��������";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(284, 237);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			this->columnHeader1->Width = 25;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"����������";
			this->columnHeader2->Width = 100;
			// 
			// Providers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Providers";
			this->Text = L"Providers";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		};
#pragma endregion
	};
}
