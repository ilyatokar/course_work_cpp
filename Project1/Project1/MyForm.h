#pragma once
#include <windows.h>
#include "addMagazin.h"
#include "Providers.h"
#include "Documents.h"
#include "AddClient.h"
#include "Client.h"
#include "Clients.h"
#include "Product.h"
#include "Products.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
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
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ClientsToolStripMenuItem;




	private: System::Windows::Forms::ListView^ listView1;






	private: System::Windows::Forms::ColumnHeader^ columnName;
	private: System::Windows::Forms::ToolStripMenuItem^ ProvidersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ documentToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;




	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;


	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ToolStripMenuItem^ òîâàğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğèõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàñõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èìïîğòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->òîâàğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ClientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ProvidersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğèõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàñõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->òîâàğToolStripMenuItem,
					this->ClientsToolStripMenuItem, this->ProvidersToolStripMenuItem, this->documentToolStripMenuItem, this->ïğèõîäToolStripMenuItem,
					this->ğàñõîäToolStripMenuItem, this->ôàéëToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(781, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// òîâàğToolStripMenuItem
			// 
			this->òîâàğToolStripMenuItem->Name = L"òîâàğToolStripMenuItem";
			this->òîâàğToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->òîâàğToolStripMenuItem->Text = L"Òîâàğû";
			this->òîâàğToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ÒîâàğToolStripMenuItem_Click);
			// 
			// ClientsToolStripMenuItem
			// 
			this->ClientsToolStripMenuItem->Name = L"ClientsToolStripMenuItem";
			this->ClientsToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->ClientsToolStripMenuItem->Text = L"Êëèåíòû";
			this->ClientsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ClientsToolStripMenuItem_Click);
			// 
			// ProvidersToolStripMenuItem
			// 
			this->ProvidersToolStripMenuItem->Name = L"ProvidersToolStripMenuItem";
			this->ProvidersToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->ProvidersToolStripMenuItem->Text = L"Ïîñòàâùèêè";
			this->ProvidersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ProvidersToolStripMenuItem_Click);
			// 
			// documentToolStripMenuItem
			// 
			this->documentToolStripMenuItem->Name = L"documentToolStripMenuItem";
			this->documentToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->documentToolStripMenuItem->Text = L"Äîêóìåíòû";
			this->documentToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::DocumentToolStripMenuItem_Click);
			// 
			// ïğèõîäToolStripMenuItem
			// 
			this->ïğèõîäToolStripMenuItem->Name = L"ïğèõîäToolStripMenuItem";
			this->ïğèõîäToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->ïğèõîäToolStripMenuItem->Text = L"Ïğèõîä";
			// 
			// ğàñõîäToolStripMenuItem
			// 
			this->ğàñõîäToolStripMenuItem->Name = L"ğàñõîäToolStripMenuItem";
			this->ğàñõîäToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->ğàñõîäToolStripMenuItem->Text = L"Ğàñõîä";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->èìïîğòToolStripMenuItem,
					this->ıêñïîğòToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// èìïîğòToolStripMenuItem
			// 
			this->èìïîğòToolStripMenuItem->Name = L"èìïîğòToolStripMenuItem";
			this->èìïîğòToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->èìïîğòToolStripMenuItem->Text = L"Èìïîğò";
			// 
			// ıêñïîğòToolStripMenuItem
			// 
			this->ıêñïîğòToolStripMenuItem->Name = L"ıêñïîğòToolStripMenuItem";
			this->ıêñïîğòToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->ıêñïîğòToolStripMenuItem->Text = L"İêñïîğò";
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->ExitToolStripMenuItem->Text = L"Âûõîä";
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
			this->columnName->Text = L"Íàçâàíèå";
			this->columnName->Width = 118;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Äàòà";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Íîìåğ íîìåêëàòóğû";
			this->columnHeader2->Width = 145;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Ïîêóïàòåëü";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Åäåíèöû èçìåğåíèÿ";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Êîëè÷åñòâî";
			this->columnHeader7->Width = 90;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Ñòîèìîñòü";
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
			this->Text = L"Ó÷åò òîâàğîâ â ìàãàçèíå";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void AddedMagazinToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = Application::StartupPath + "/db/magazins.json";

		//AddClient^ f2 = gcnew AddClient();
		//mgz = f2->Shown(mgz);
		//Console::WriteLine(JsonConvert::SerializeObject(mgz));

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
		mgz = form->Provider_Shown(mgz);
	}

	private: System::Void DocumentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Documents^ form = gcnew Documents();
		mgz = form->Document_Shown(mgz);

	}

	private: System::Void ListviewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ Id = gcnew ListViewItem();
		Id->Text = "1";
		ListViewItem::ListViewSubItem^ Name = gcnew ListViewItem::ListViewSubItem();
		Name->Text = L"ìàãàçèí 1";
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
		Console::WriteLine("click column" + " " + e->Column);//âûâîä íîìåğ êîëîíêè
	}
	private: System::Void ÒîâàğToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Products^ form = gcnew Products();
	}
	private: System::Void ClientsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Clients^ form = gcnew Clients();
		mgz = form->Client_Shown(mgz);

	}
	};
}

