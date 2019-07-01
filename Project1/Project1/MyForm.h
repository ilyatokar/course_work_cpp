#pragma once
#include <windows.h>
#include "addMagazin.h"
#include "Providers.h"
#include "Documents.h"
#include "AddClient.h"
#include "Client.h"
#include "Product.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public: Magazin^ mgz;
	public:
		MyForm()
		{
			mgz = gcnew Magazin();
			mgz->ArrayClient = gcnew List<Client^>();
			mgz->ArrayProvider = gcnew List<Provider^>();
			mgz->ArrayDocument = gcnew List<Document^>();
			mgz->ArrayProduct = gcnew List<Product^>();

			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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





	private: System::Windows::Forms::ColumnHeader^ columnName;
	private: System::Windows::Forms::ToolStripMenuItem^ ProvidersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ documentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ listviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ показать“оварыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ EditToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ импортƒаных»з‘айлаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ экспортƒанных»з‘айлаToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;


	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->магазиныToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addedMagazinToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EditToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->RemoveItemsSelectedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->показать“оварыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ProvidersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->импортƒаных»з‘айлаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->экспортƒанных»з‘айлаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->магазиныToolStripMenuItem,
					this->ProvidersToolStripMenuItem, this->documentToolStripMenuItem, this->импортƒаных»з‘айлаToolStripMenuItem, this->экспортƒанных»з‘айлаToolStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(781, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// магазиныToolStripMenuItem
			// 
			this->магазиныToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addedMagazinToolStripMenuItem,
					this->EditToolStripMenuItem, this->RemoveItemsSelectedToolStripMenuItem, this->listviewToolStripMenuItem, this->показать“оварыToolStripMenuItem
			});
			this->магазиныToolStripMenuItem->Name = L"магазиныToolStripMenuItem";
			this->магазиныToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->магазиныToolStripMenuItem->Text = L"  лиенты";
			// 
			// addedMagazinToolStripMenuItem
			// 
			this->addedMagazinToolStripMenuItem->Name = L"addedMagazinToolStripMenuItem";
			this->addedMagazinToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->addedMagazinToolStripMenuItem->Text = L"ƒобавить";
			this->addedMagazinToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AddedMagazinToolStripMenuItem_Click);
			// 
			// EditToolStripMenuItem
			// 
			this->EditToolStripMenuItem->Name = L"EditToolStripMenuItem";
			this->EditToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->EditToolStripMenuItem->Text = L"–едактировать";
			// 
			// RemoveItemsSelectedToolStripMenuItem
			// 
			this->RemoveItemsSelectedToolStripMenuItem->Name = L"RemoveItemsSelectedToolStripMenuItem";
			this->RemoveItemsSelectedToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->RemoveItemsSelectedToolStripMenuItem->Text = L"”далить выбранные элементы";
			this->RemoveItemsSelectedToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::RemoveItemsSelectedToolStripMenuItem_Click);
			// 
			// listviewToolStripMenuItem
			// 
			this->listviewToolStripMenuItem->Name = L"listviewToolStripMenuItem";
			this->listviewToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->listviewToolStripMenuItem->Text = L"listview";
			this->listviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ListviewToolStripMenuItem_Click);
			// 
			// показать“оварыToolStripMenuItem
			// 
			this->показать“оварыToolStripMenuItem->Name = L"показать“оварыToolStripMenuItem";
			this->показать“оварыToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->показать“оварыToolStripMenuItem->Text = L"ѕоказать товары";
			// 
			// ProvidersToolStripMenuItem
			// 
			this->ProvidersToolStripMenuItem->Name = L"ProvidersToolStripMenuItem";
			this->ProvidersToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->ProvidersToolStripMenuItem->Text = L"ѕоставщики";
			this->ProvidersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ProvidersToolStripMenuItem_Click);
			// 
			// documentToolStripMenuItem
			// 
			this->documentToolStripMenuItem->Name = L"documentToolStripMenuItem";
			this->documentToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->documentToolStripMenuItem->Text = L"ƒокументы";
			this->documentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::DocumentToolStripMenuItem_Click);
			// 
			// импортƒаных»з‘айлаToolStripMenuItem
			// 
			this->импортƒаных»з‘айлаToolStripMenuItem->Name = L"импортƒаных»з‘айлаToolStripMenuItem";
			this->импортƒаных»з‘айлаToolStripMenuItem->Size = System::Drawing::Size(141, 20);
			this->импортƒаных»з‘айлаToolStripMenuItem->Text = L"»мпорт даных из файла";
			// 
			// экспортƒанных»з‘айлаToolStripMenuItem
			// 
			this->экспортƒанных»з‘айлаToolStripMenuItem->Name = L"экспортƒанных»з‘айлаToolStripMenuItem";
			this->экспортƒанных»з‘айлаToolStripMenuItem->Size = System::Drawing::Size(147, 20);
			this->экспортƒанных»з‘айлаToolStripMenuItem->Text = L"Ёкспорт данных в файла";
			this->экспортƒанных»з‘айлаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Ёкспортƒанных»з‘айлаToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->ExitToolStripMenuItem->Text = L"¬ыход";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnName, this->columnHeader1,
					this->columnHeader2, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(781, 318);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &MyForm::ListView1_ColumnClick);
			// 
			// columnName
			// 
			this->columnName->Text = L"Ќазвание";
			this->columnName->Width = 118;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ƒата";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Ќомер номеклатуры";
			this->columnHeader2->Width = 145;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"ѕокупатель";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"≈деницы измерени€";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L" оличество";
			this->columnHeader7->Width = 90;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"—тоимость";
			this->columnHeader8->Width = 74;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 342);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void AddedMagazinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = Application::StartupPath + "/db/magazins.json";

		AddClient^ f2 = gcnew AddClient();
		mgz = f2->Shown(mgz);
		Console::WriteLine(JsonConvert::SerializeObject(mgz));
		
		//ListViewItem^ Id = gcnew ListViewItem();

		//while (listView1->Items->Count > 0) {
		//	ListViewItem^ item = listView1->Items[0];
		//	listView1->Items->Remove(item);
		//}

		//FileStream^ fileReader = gcnew FileStream(fileName, FileMode::OpenOrCreate);
		//StreamReader^ reader = gcnew StreamReader(fileReader);

		//String^ jsonstr = reader->ReadLine();

		//reader->Close();
		//fileReader->Close();

		//List<Magazin^>^ data;
		//if (!String::IsNullOrEmpty(jsonstr))
		//{
		//	data = JsonConvert::DeserializeObject<List<Magazin^>^>(jsonstr);
		//}

		//for (int i = 0; i < data->Count; i++) {
		//	ListViewItem^ Id = gcnew ListViewItem();
		//	Id->Text = data[i]->id.ToString();
		//	ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
		//	Name->Text = data[i]->Name;
		//	Id->SubItems->Add(Name);
		//	listView1->Items->Add(Id);
		//}


	}

	private: System::Void ProvidersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Providers^ form = gcnew Providers();
		form->Provider_Shown(mgz);
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
		String^ fileName = Application::StartupPath + "/db/magazins.json";
		List<Magazin^>^ data = JsonConvert::DeserializeObject<List<Magazin^>^>(File::ReadAllText(fileName));

		if (data != nullptr)
		{
			int id = Convert::ToInt32(listView1->SelectedItems[0]->SubItems[0]->Text);
			//for (int i = 0; i < data->Count; i++)
			//{
			//	if (data[i]->id == id)
			//	{
			//		data->Remove(data[i]);
			//	}
			//}

			while (listView1->Items->Count > 0) {
				listView1->Items->Remove(listView1->Items[0]);
			}

			//for (int i = 0; i < data->Count; i++) {
			//	ListViewItem^ Id = gcnew ListViewItem();
			//	Id->Text = data[i]->id.ToString();
			//	ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
			//	Name->Text = data[i]->Name;
			//	Id->SubItems->Add(Name);
			//	listView1->Items->Add(Id);
			//}

			File::WriteAllText(fileName, JsonConvert::SerializeObject(data));
		}

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = Application::StartupPath + "/db/magazins.json";
		List<Magazin^>^ data = JsonConvert::DeserializeObject<List<Magazin^>^>(File::ReadAllText(fileName));

		//if (data != nullptr) {
		//	for (int i = 0; i < data->Count; i++) {
		//		ListViewItem^ Id = gcnew ListViewItem();
		//		Id->Text = data[i]->id.ToString();
		//		ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
		//		Name->Text = data[i]->Name;
		//		Id->SubItems->Add(Name);
		//		listView1->Items->Add(Id);
		//	}
		//}
	}
	private: System::Void ListView1_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {
		Console::WriteLine("click column" + " " + e->Column);//вывод номер колонки
	}
private: System::Void Ёкспортƒанных»з‘айлаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

