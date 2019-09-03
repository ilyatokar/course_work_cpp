#pragma once
#include "AddConsumption.h"
#include "EditConsumption.h"
#include "Magazin.h"
#include "Consumption.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Consumptions
	/// </summary>
	public ref class Consumptions : public System::Windows::Forms::Form
	{
	public:
		Consumptions(void)
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
		~Consumptions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->listView1->Size = System::Drawing::Size(284, 241);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			this->columnHeader1->Width = 30;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Продукт";
			this->columnHeader2->Width = 120;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Колличество";
			this->columnHeader3->Width = 80;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->добавитьToolStripMenuItem,
					this->редактироватьToolStripMenuItem, this->удалитьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			this->добавитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Consumptions::CreateToolStripMenuItem_Click);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Consumptions::EditToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Consumptions::RemoveToolStripMenuItem_Click);
			// 
			// Consumptions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 265);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Consumptions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Consumptions";
			this->Load += gcnew System::EventHandler(this, &Consumptions::Consumptions_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Consumption^ consumption;
	private: Magazin^ magaz;
	public: Magazin^ Consumption_Shown(Magazin^ magaz) {
		if (magaz->ArrayComing->Count == 0) {
			MessageBox::Show("Таблица прихода не должна быть пустой!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return magaz;
		}
		this->magaz = magaz;
		this->ShowDialog();
		return this->magaz;
	}

	private: System::Void UpdateListView() {
		listView1->Items->Clear();
		for (int i = 0; i < this->magaz->ArrayConsumption->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magaz->ArrayConsumption[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Product = gcnew ListViewItem::ListViewSubItem();
			Product->Text = this->magaz->getNameProductById(this->magaz->ArrayConsumption[i]->productId);
			Id->SubItems->Add(Product);
			ListViewItem::ListViewSubItem^ Count = gcnew ListViewItem::ListViewSubItem();
			Count->Text = this->magaz->ArrayConsumption[i]->count.ToString();
			Id->SubItems->Add(Count);
			listView1->Items->Add(Id); 
		}
	}

	private: System::Void Consumptions_Load(System::Object^ sender, System::EventArgs^ e) {
		this->UpdateListView();
	}

	private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddConsumption^ form = gcnew AddConsumption();
		magaz = form->AddConsumption_Shown(magaz);
		this->UpdateListView();
		magaz->WriteToFile();
	}

	private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listView1->SelectedItems->Count > 0 &&
			listView1->SelectedItems->Count < 2) {
			EditConsumption^ form = gcnew EditConsumption();
			magaz = form->EditConsumption_Shown(this->magaz, (int)Convert::ToInt32(listView1->SelectedItems[0]->SubItems[0]->Text));
			this->UpdateListView();
			magaz->WriteToFile();
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
			for (int i = 0; i < magaz->ArrayConsumption->Count; i++)
			{
				if (magaz->ArrayConsumption[i]->id == id)
				{
					magaz->ArrayConsumption->Remove(magaz->ArrayConsumption[i]);
				}
			}
		}
		this->UpdateListView();
		magaz->WriteToFile();
	}
};
}
