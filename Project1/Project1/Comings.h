#pragma once
#include "EditComing.h"
#include "AddComing.h"
#include "Coming.h"
#include "Magazin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Comings
	/// </summary>
	public ref class Comings : public System::Windows::Forms::Form
	{
	public:
		Comings(void)
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
		~Comings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;

	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьToolStripMenuItem,
					this->редактироватьToolStripMenuItem, this->удалитьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(429, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			this->добавитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Comings::CreateToolStripMenuItem_Click);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Comings::EditToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Comings::RemoveToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader7
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(429, 241);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			this->columnHeader1->Width = 26;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Товар";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Поставщик";
			this->columnHeader3->Width = 77;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Документ";
			this->columnHeader4->Width = 65;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Колличество";
			this->columnHeader5->Width = 84;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Стоимость";
			this->columnHeader7->Width = 71;
			// 
			// Comings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 265);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Comings";
			this->Text = L"Comings";
			this->Load += gcnew System::EventHandler(this, &Comings::Comings_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Coming^ cm;
	public: Magazin^ magz;
	public: Magazin^ Coming_Shown(Magazin^ magaz) {
		if (magaz->ArrayDocument->Count == 0 ||
			magaz->ArrayProduct->Count == 0 ||
			magaz->ArrayProvider->Count == 0
			) {
			MessageBox::Show("Товары, Документы, Постащики не должны быть пустыми!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return magaz;
		}
		magz = magaz;	
		this->ShowDialog();
		return magz;
	}

	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddComing ^form = gcnew AddComing();
		magz = form->AddComing_Shown(magz);
		this->UpdateListView();
	}

	private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0 &&
			listView1->SelectedItems->Count < 2) {
			EditComing^ form = gcnew EditComing();
			magz = form->EditComing_Shown(this->magz, (int)Convert::ToInt32(listView1->SelectedItems[0]->SubItems[0]->Text));
			this->UpdateListView();
		}
		else if (listView1->SelectedItems->Count >= 2) {
			MessageBox::Show("Выбрано много элементов для редактирования!!!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			MessageBox::Show("Не выбран элемент для редактирования!!!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void RemoveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < listView1->SelectedItems->Count; i++) {
			int id = Convert::ToInt32(listView1->SelectedItems[i]->SubItems[0]->Text);
			for (int i = 0; i < magz->ArrayComing->Count; i++)
			{
				if (magz->ArrayComing[i]->id == id)
				{
					magz->ArrayComing->Remove(magz->ArrayComing[i]);
				}
			}
		}
		this->UpdateListView();
	}

	private: System::Void Comings_Load(System::Object^ sender, System::EventArgs^ e) {
		this->UpdateListView();
	}

	private: System::Void UpdateListView() {
		listView1->Items->Clear();
		for (int i = 0; i < this->magz->ArrayComing->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magz->ArrayComing[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Product = gcnew ListViewItem::ListViewSubItem();
			Product->Text = this->magz->ArrayComing[i]->objProduct->Name;
			Id->SubItems->Add(Product);
			ListViewItem::ListViewSubItem^ Provider = gcnew ListViewItem::ListViewSubItem();
			Provider->Text = this->magz->ArrayComing[i]->objProvider->Name;
			Id->SubItems->Add(Provider);
			ListViewItem::ListViewSubItem^ Document = gcnew ListViewItem::ListViewSubItem();
			Document->Text = this->magz->ArrayComing[i]->objDocument->NumberDogovor->ToString();
			Id->SubItems->Add(Document);
			ListViewItem::ListViewSubItem^ Count = gcnew ListViewItem::ListViewSubItem();
			Count->Text = this->magz->ArrayComing[i]->count.ToString();
			Id->SubItems->Add(Count);
			ListViewItem::ListViewSubItem^ Price = gcnew ListViewItem::ListViewSubItem();
			Price->Text = this->magz->ArrayComing[i]->price.ToString();
			Id->SubItems->Add(Price);
			listView1->Items->Add(Id);
		}
	}
};
}
