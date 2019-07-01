#pragma once
#include "AddProvider.h"
#include "EditProvider.h"

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
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(418, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->�������ToolStripMenuItem->Text = L"��������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Providers::CreateToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Providers::EditToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->�������ToolStripMenuItem->Text = L" �������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Providers::�������ToolStripMenuItem_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(418, 241);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			this->columnHeader1->Width = 31;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"��������";
			this->columnHeader2->Width = 117;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L" �����";
			this->columnHeader3->Width = 151;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"�����������";
			this->columnHeader4->Width = 103;
			// 
			// Providers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(418, 265);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Providers";
			this->Text = L"Providers";
			this->Load += gcnew System::EventHandler(this, &Providers::Providers_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Provider^ provider;
	public: Magazin^ magz;
	public: Magazin^ Provider_Shown(Magazin^ marr) {
		magz = marr;
		this->magz = marr;
		listView1->Items->Clear();
		this->ShowDialog();
		return magz;
	}
	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddProvider^ form = gcnew AddProvider();
		magz = form->AddProvider_Shown(this->magz);
		listView1->Items->Clear();
		for (int i = 0; i < this->magz->ArrayProvider->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magz->ArrayProvider[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
			Name->Text = this->magz->ArrayProvider[i]->Name;
			Id->SubItems->Add(Name);
			ListViewItem::ListViewSubItem^ Adress = gcnew ListViewItem::ListViewSubItem();
			Adress->Text = this->magz->ArrayProvider[i]->Addres;
			Id->SubItems->Add(Adress);
			ListViewItem::ListViewSubItem^ Comment = gcnew ListViewItem::ListViewSubItem();
			Comment->Text = this->magz->ArrayProvider[i]->Comment;
			Id->SubItems->Add(Comment);
			listView1->Items->Add(Id);
		}
		
	}
	private: System::Void Providers_Load(System::Object^ sender, System::EventArgs^ e) {
		listView1->Items->Clear();
		for (int i = 0; i < this->magz->ArrayProvider->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magz->ArrayProvider[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
			Name->Text = this->magz->ArrayProvider[i]->Name;
			Id->SubItems->Add(Name);
			ListViewItem::ListViewSubItem^ Adress = gcnew ListViewItem::ListViewSubItem();
			Adress->Text = this->magz->ArrayProvider[i]->Addres;
			Id->SubItems->Add(Adress);
			ListViewItem::ListViewSubItem^ Comment = gcnew ListViewItem::ListViewSubItem();
			Comment->Text = this->magz->ArrayProvider[i]->Comment;
			Id->SubItems->Add(Comment);
			listView1->Items->Add(Id);
		}
	}
private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count > 0 &&
		listView1->SelectedItems->Count < 2) {
		EditProvider^ form = gcnew EditProvider();
		Console::WriteLine(listView1->SelectedItems[0]->SubItems[0]->Text);
		magz = form->EditProvider_Shown(this->magz, (int)Convert::ToInt32(listView1->SelectedItems[0]->SubItems[0]->Text));
		listView1->Items->Clear();
		for (int i = 0; i < this->magz->ArrayProvider->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magz->ArrayProvider[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
			Name->Text = this->magz->ArrayProvider[i]->Name;
			Id->SubItems->Add(Name);
			ListViewItem::ListViewSubItem^ Adress = gcnew ListViewItem::ListViewSubItem();
			Adress->Text = this->magz->ArrayProvider[i]->Addres;
			Id->SubItems->Add(Adress);
			ListViewItem::ListViewSubItem^ Comment = gcnew ListViewItem::ListViewSubItem();
			Comment->Text = this->magz->ArrayProvider[i]->Comment;
			Id->SubItems->Add(Comment);
			listView1->Items->Add(Id);
		}
	}
	else if (listView1->SelectedItems->Count >= 2) {
		MessageBox::Show("������� ����� ��������� ��� ��������������!!!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else{
		MessageBox::Show("�� ������ ������� ��� ��������������!!!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < listView1->SelectedItems->Count; i++) {
		int id = Convert::ToInt32(listView1->SelectedItems[i]->SubItems[0]->Text);
		for (int i = 0; i < magz->ArrayProvider->Count; i++)
		{
			if (magz->ArrayProvider[i]->id == id)
			{
				magz->ArrayProvider->Remove(magz->ArrayProvider[i]);
			}
		}
	}

	listView1->Items->Clear();
	for (int i = 0; i < this->magz->ArrayProvider->Count; i++) {
		ListViewItem^ Id = gcnew ListViewItem();
		Id->Text = this->magz->ArrayProvider[i]->id.ToString();
		ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
		Name->Text = this->magz->ArrayProvider[i]->Name;
		Id->SubItems->Add(Name);
		ListViewItem::ListViewSubItem^ Adress = gcnew ListViewItem::ListViewSubItem();
		Adress->Text = this->magz->ArrayProvider[i]->Addres;
		Id->SubItems->Add(Adress);
		ListViewItem::ListViewSubItem^ Comment = gcnew ListViewItem::ListViewSubItem();
		Comment->Text = this->magz->ArrayProvider[i]->Comment;
		Id->SubItems->Add(Comment);
		listView1->Items->Add(Id);
	}

}
};
}
