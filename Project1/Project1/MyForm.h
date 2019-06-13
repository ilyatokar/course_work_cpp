#pragma once
#include <windows.h>
#include "addMagazin.h"
#include "Providers.h"
#include "Documents.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ магазиныToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addedMagazinToolStripMenuItem;


	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ToolStripMenuItem^ RemoveItemsSelectedToolStripMenuItem;




	private: System::Windows::Forms::ColumnHeader^ columnId;
	private: System::Windows::Forms::ColumnHeader^ columnName;
	private: System::Windows::Forms::ToolStripMenuItem^ ProvidersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ documentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ показатьТоварыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ EditToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) {
				L"id",
					L"Название"
			}, -1));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->магазиныToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addedMagazinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RemoveItemsSelectedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->показатьТоварыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ProvidersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnId = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->EditToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->магазиныToolStripMenuItem,
					this->ProvidersToolStripMenuItem, this->documentToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(655, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// магазиныToolStripMenuItem
			// 
			this->магазиныToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addedMagazinToolStripMenuItem,
					this->RemoveItemsSelectedToolStripMenuItem, this->listviewToolStripMenuItem, this->показатьТоварыToolStripMenuItem, this->EditToolStripMenuItem
			});
			this->магазиныToolStripMenuItem->Name = L"магазиныToolStripMenuItem";
			this->магазиныToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->магазиныToolStripMenuItem->Text = L"Магазины";
			// 
			// addedMagazinToolStripMenuItem
			// 
			this->addedMagazinToolStripMenuItem->Name = L"addedMagazinToolStripMenuItem";
			this->addedMagazinToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->addedMagazinToolStripMenuItem->Text = L"Добавить";
			this->addedMagazinToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AddedMagazinToolStripMenuItem_Click);
			// 
			// RemoveItemsSelectedToolStripMenuItem
			// 
			this->RemoveItemsSelectedToolStripMenuItem->Name = L"RemoveItemsSelectedToolStripMenuItem";
			this->RemoveItemsSelectedToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->RemoveItemsSelectedToolStripMenuItem->Text = L"Удалить выбранные элементы";
			this->RemoveItemsSelectedToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::RemoveItemsSelectedToolStripMenuItem_Click);
			// 
			// listviewToolStripMenuItem
			// 
			this->listviewToolStripMenuItem->Name = L"listviewToolStripMenuItem";
			this->listviewToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->listviewToolStripMenuItem->Text = L"listview";
			this->listviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ListviewToolStripMenuItem_Click);
			// 
			// показатьТоварыToolStripMenuItem
			// 
			this->показатьТоварыToolStripMenuItem->Name = L"показатьТоварыToolStripMenuItem";
			this->показатьТоварыToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->показатьТоварыToolStripMenuItem->Text = L"Показать товары";
			// 
			// ProvidersToolStripMenuItem
			// 
			this->ProvidersToolStripMenuItem->Name = L"ProvidersToolStripMenuItem";
			this->ProvidersToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->ProvidersToolStripMenuItem->Text = L"Поставщики";
			this->ProvidersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ProvidersToolStripMenuItem_Click);
			// 
			// documentToolStripMenuItem
			// 
			this->documentToolStripMenuItem->Name = L"documentToolStripMenuItem";
			this->documentToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->documentToolStripMenuItem->Text = L"Документы";
			this->documentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::DocumentToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->ExitToolStripMenuItem->Text = L"Выход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnId, this->columnName });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(655, 318);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnId
			// 
			this->columnId->Text = L"id";
			this->columnId->Width = 30;
			// 
			// columnName
			// 
			this->columnName->Text = L"Название";
			this->columnName->Width = 118;
			// 
			// EditToolStripMenuItem
			// 
			this->EditToolStripMenuItem->Name = L"EditToolStripMenuItem";
			this->EditToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->EditToolStripMenuItem->Text = L"Редактировать";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(655, 342);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void AddedMagazinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		addMagazin^ form = gcnew addMagazin(this);
		form->ShowDialog();
			}

	private: System::Void ProvidersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Providers^ form = gcnew Providers();
		form->Show();
	}

	private: System::Void DocumentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Documents^ form = gcnew Documents();
		form->Show();
	}



	private: System::Void ListviewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ Id = gcnew ListViewItem();
		Id->Text = "1";
		ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
		Name->Text = L"магазин 1";
		Id->SubItems->Add(Name);
		listView1->Items->Add(Id);
	}



	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void RemoveItemsSelectedToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		while (listView1->SelectedItems->Count > 0) {
			ListViewItem^ item = listView1->SelectedItems[0];
			String^ str = item->SubItems[1]->Text;
			MessageBox::Show(str, "MessageBox Test",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			listView1->Items->Remove(item);
		}
	}

	};
}
