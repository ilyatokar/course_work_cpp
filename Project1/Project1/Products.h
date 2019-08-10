#pragma once
#include "Magazin.h"
#include "Product.h"
#include "AddProduct.h"
#include "EditProduct.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Products
	/// </summary>
	public ref class Products : public System::Windows::Forms::Form
	{
	public:
		Products(void)
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
		~Products()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  продуктыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьToolStripMenuItem;


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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->продуктыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(468, 237);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Название";
			this->columnHeader2->Width = 80;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->продуктыToolStripMenuItem,
					this->редактироватьToolStripMenuItem, this->удалитьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(468, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// продуктыToolStripMenuItem
			// 
			this->продуктыToolStripMenuItem->Name = L"продуктыToolStripMenuItem";
			this->продуктыToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->продуктыToolStripMenuItem->Text = L"Добавить";
			this->продуктыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Products::CreateToolStripMenuItem_Click);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(98, 20);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Products::EditToolStripMenuItem_Click);
			// 
			// удалитьToolStripMenuItem
			// 
			this->удалитьToolStripMenuItem->Name = L"удалитьToolStripMenuItem";
			this->удалитьToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->удалитьToolStripMenuItem->Text = L"Удалить";
			this->удалитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Products::RemoveToolStripMenuItem_Click);
			// 
			// Products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 261);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Products";
			this->Text = L"Products";
			this->Load += gcnew System::EventHandler(this, &Products::Products_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: Product^ pr;
		public: Magazin^ magz;
		public: Magazin^ Products_Shown(Magazin^ m) {
			magz = m;
			listView1->Items->Clear();
			this->ShowDialog();
			return magz;
		}
private: System::Void Products_Load(System::Object^ sender, System::EventArgs^ e) {
	this->UpdateListView();
}
	private: System::Void UpdateListView() {
		listView1->Items->Clear();
		for (int i = 0; i < this->magz->ArrayProduct->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->magz->ArrayProduct[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
			Name->Text = this->magz->ArrayProduct[i]->Name;
			Id->SubItems->Add(Name);
			listView1->Items->Add(Id);
		}
	}
private: System::Void CreateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AddProduct^ form = gcnew AddProduct();
	magz = form->AddProduct_Shown(magz);
	this->UpdateListView();
}
private: System::Void EditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count > 0 &&
		listView1->SelectedItems->Count < 2) {
		EditProduct^ form = gcnew EditProduct();
		magz = form->EditProduct_Shown(this->magz, (int)Convert::ToInt32(listView1->SelectedItems[0]->SubItems[0]->Text));
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
		for (int i = 0; i < magz->ArrayProduct->Count; i++)
		{
			if (magz->ArrayProduct[i]->id == id)
			{
				magz->ArrayProduct->Remove(magz->ArrayProduct[i]);
			}
		}
	}
	this->UpdateListView();
}
};
}
