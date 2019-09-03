#pragma once
#include <windows.h>
#include "Magazin.h"
#include "Providers.h"
#include "Documents.h"
#include "Product.h"
#include "Products.h"
#include "Comings.h"
#include "Consumption.h"
#include "Consumptions.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Newtonsoft::Json;
	using namespace Newtonsoft::Json::Linq;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
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
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnName;
	private: System::Windows::Forms::ToolStripMenuItem^ ProvidersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ documentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;

	private: System::Windows::Forms::ColumnHeader^ columnHeader7;

	private: System::Windows::Forms::ToolStripMenuItem^ товарToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ приходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ расходToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->товарToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ProvidersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->приходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->товарToolStripMenuItem,
					this->ProvidersToolStripMenuItem, this->documentToolStripMenuItem, this->приходToolStripMenuItem, this->расходToolStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(391, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// товарToolStripMenuItem
			// 
			this->товарToolStripMenuItem->Name = L"товарToolStripMenuItem";
			this->товарToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->товарToolStripMenuItem->Text = L"Товары";
			this->товарToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ТоварToolStripMenuItem_Click);
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
			// приходToolStripMenuItem
			// 
			this->приходToolStripMenuItem->Name = L"приходToolStripMenuItem";
			this->приходToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->приходToolStripMenuItem->Text = L"Приход";
			this->приходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ComingToolStripMenuItem_Click);
			// 
			// расходToolStripMenuItem
			// 
			this->расходToolStripMenuItem->Name = L"расходToolStripMenuItem";
			this->расходToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->расходToolStripMenuItem->Text = L"Расход";
			this->расходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ConsumptionToolStripMenuItem_Click);
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
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnName,
					this->columnHeader7
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(391, 291);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			this->columnHeader1->Width = 30;
			// 
			// columnName
			// 
			this->columnName->Text = L"Название";
			this->columnName->Width = 118;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Количество";
			this->columnHeader7->Width = 90;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 315);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Учет товаров в магазине";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Magazin^ mgz;
	private: String^ pathDB = Application::StartupPath + "/db/";
	private: String^ fileDBName = "magazins.json";

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			if (File::Exists(pathDB+fileDBName)) {
			try
			{
				mgz = JsonConvert::DeserializeObject<Magazin^>(File::ReadAllText(pathDB + fileDBName));
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Поврежден файл базы!!!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
				Environment::Exit(0);
			}
			
		}
		else {
			if (!Directory::Exists(pathDB)) {
				Directory::CreateDirectory(pathDB);
			}
			FileStream^ fs = File::Create(pathDB + fileDBName);
			fs->Close();
			InitMagazin();
			
		}
		this->UpdateListView();
	}

	private: System::Void ProvidersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Providers^ form = gcnew Providers();
		mgz = form->Provider_Shown(mgz);
		this->UpdateListView();
	}

	private: System::Void DocumentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Documents^ form = gcnew Documents();
		mgz = form->Document_Shown(mgz);
		this->UpdateListView();
	}


	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	
	// column click
	//private: System::Void ListView1_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {
	//	Console::WriteLine("click column" + " " + e->Column);//вывод номер колонки
	//}

	private: System::Void ТоварToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Products^ form = gcnew Products();
		mgz = form->Products_Shown(mgz);
		this->UpdateListView();
	}

	private: System::Void ComingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Comings^ form = gcnew Comings();
		mgz = form->Coming_Shown(mgz);
		this->UpdateListView();
	}

	private: System::Void ConsumptionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Consumptions^ form = gcnew Consumptions();
		mgz = form->Consumption_Shown(mgz);
		this->UpdateListView();
	}

	private: System::Void UpdateListView() {
		listView1->Items->Clear();
		for (int i = 0; i < this->mgz->ArrayProduct->Count; i++) {
			ListViewItem^ Id = gcnew ListViewItem();
			Id->Text = this->mgz->ArrayProduct[i]->id.ToString();
			ListViewItem::ListViewSubItem^ Product = gcnew ListViewItem::ListViewSubItem();
			Product->Text = this->mgz->ArrayProduct[i]->Name;
			Id->SubItems->Add(Product);
			ListViewItem::ListViewSubItem^ Provider = gcnew ListViewItem::ListViewSubItem();
			Provider->Text = this->ResidualGoods(this->mgz->ArrayProduct[i]).ToString();
			Id->SubItems->Add(Provider);
			listView1->Items->Add(Id);
		}
	}

	private: int ResidualGoods(Product^ product) {
		int countComing = 0;
		int countConsumption = 0;
		for each (Coming^ item in this->mgz->ArrayComing)
		{
			if (item->productId == product->id)
				countComing += item->count;
		}

		for each (Consumption^ item in this->mgz->ArrayConsumption)
		{
			if (item->productId == product->id)
				countConsumption += item->count;
		}

		return countComing - countConsumption;
	}

	private: System::Void InitMagazin() {
		mgz = gcnew Magazin();
		mgz->ArrayProvider = gcnew List<Provider^>();
		mgz->ArrayDocument = gcnew List<Document^>();
		mgz->ArrayProduct = gcnew List<Product^>();
		mgz->ArrayComing = gcnew List<Coming^>();
		mgz->ArrayConsumption = gcnew List<Consumption^>();
	}

};
}

