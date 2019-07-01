#pragma once
#include "Magazin.h"
#include "Document.h"
#include "AddDocument.h"
#include "EditdDocument.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Documents
	/// </summary>
	public ref class Documents : public System::Windows::Forms::Form
	{
	public:
		Documents(void)
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
		~Documents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(492, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Documents::CreateToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Documents::EditToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Documents::RemoveToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(492, 241);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"����� ���������";
			this->columnHeader2->Width = 108;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"���������";
			this->columnHeader3->Width = 99;
			// 
			// Documents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 265);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Documents";
			this->Text = L"���������";
			this->Load += gcnew System::EventHandler(this, &Documents::Documents_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Document^ doc;
	public: Magazin^ magz;
	public: Magazin^ Document_Shown(Magazin^ m) {
		magz = m;
		listView1->Items->Clear();
		this->ShowDialog();
		return magz;
	}

	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddDocument^ form = gcnew AddDocument();
		magz = form->AddDocument_Shown(magz);
		this->UpdateListView();
	}

	private: System::Void UpdateListView() {
		listView1->Items->Clear();
		for (int i = 0; i < this->magz->ArrayDocument->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magz->ArrayDocument[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
			Name->Text = this->magz->ArrayDocument[i]->NumberDogovor;
			Id->SubItems->Add(Name);
			ListViewItem::ListViewSubItem^ Adress = gcnew ListViewItem::ListViewSubItem();
			Adress->Text = this->magz->ArrayDocument[i]->Naklodnaya;
			Id->SubItems->Add(Adress);
			listView1->Items->Add(Id);
		}
	}

	private: System::Void Documents_Load(System::Object^ sender, System::EventArgs^ e) {
		this->UpdateListView();
	}

	private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0 &&
			listView1->SelectedItems->Count < 2) {
			EditdDocument^ form = gcnew EditdDocument();
			magz = form->EditDocument_Shown(this->magz, (int)Convert::ToInt32(listView1->SelectedItems[0]->SubItems[0]->Text));
			this->UpdateListView();
		}
		else if (listView1->SelectedItems->Count >= 2) {
			MessageBox::Show("������� ����� ��������� ��� ��������������!!!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("�� ������ ������� ��� ��������������!!!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void RemoveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < listView1->SelectedItems->Count; i++) {
			int id = Convert::ToInt32(listView1->SelectedItems[i]->SubItems[0]->Text);
			for (int i = 0; i < magz->ArrayDocument->Count; i++)
			{
				if (magz->ArrayDocument[i]->id == id)
				{
					magz->ArrayDocument->Remove(magz->ArrayDocument[i]);
				}
			}
		}
		this->UpdateListView();
	}
	};
}
