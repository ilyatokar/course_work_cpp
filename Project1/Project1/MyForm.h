#pragma once
#include <windows.h>
#include "addMagazin.h"
#include "Providers.h"
#include "Documents.h"
#include "AddClient.h"
#include "Client.h"
#include "Product.h"
#include "Comings.h"
#include "Coming.h"
#include "Clients.h"
#include "Clients.h"
#include "Consumptions.h"

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
			mgz->ArrayComing = gcnew List<Coming^>();

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




	private: System::Windows::Forms::ListView^ listView1;






	private: System::Windows::Forms::ColumnHeader^ columnName;
	private: System::Windows::Forms::ToolStripMenuItem^ ProvidersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ documentToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem;







	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòóïëåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàñõîäToolStripMenuItem;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êëèåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòàâùèêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîêóìåíòûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïîñòóïëåíèåToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ğàñõîäToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìàãàçèíûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òîâàğûToolStripMenuItem;
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
			this->ProvidersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->documentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòóïëåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàñõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìàãàçèíûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êëèåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòàâùèêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîêóìåíòûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñòóïëåíèåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàñõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òîâàğûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->ìåíşToolStripMenuItem,
					this->ìàãàçèíûToolStripMenuItem, this->ProvidersToolStripMenuItem, this->documentToolStripMenuItem, this->ïîñòóïëåíèåToolStripMenuItem,
					this->ğàñõîäToolStripMenuItem, this->èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem, this->ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(834, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
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
			// ïîñòóïëåíèåToolStripMenuItem
			// 
			this->ïîñòóïëåíèåToolStripMenuItem->Name = L"ïîñòóïëåíèåToolStripMenuItem";
			this->ïîñòóïëåíèåToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->ïîñòóïëåíèåToolStripMenuItem->Text = L"Ïîñòóïëåíèå";
			this->ïîñòóïëåíèåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ComingToolStripMenuItem_Click);
			// 
			// ğàñõîäToolStripMenuItem
			// 
			this->ğàñõîäToolStripMenuItem->Name = L"ğàñõîäToolStripMenuItem";
			this->ğàñõîäToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->ğàñõîäToolStripMenuItem->Text = L"Ğàñõîä";
			this->ğàñõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ConsumptionToolStripMenuItem_Click);
			// 
			// èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem
			// 
			this->èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem->Name = L"èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem";
			this->èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem->Size = System::Drawing::Size(141, 20);
			this->èìïîğòÄàíûõÈçÔàéëàToolStripMenuItem->Text = L"Èìïîğò äàíûõ èç ôàéëà";
			// 
			// ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem
			// 
			this->ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem->Name = L"ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem";
			this->ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem->Size = System::Drawing::Size(147, 20);
			this->ıêñïîğòÄàííûõÈçÔàéëàToolStripMenuItem->Text = L"İêñïîğò äàííûõ â ôàéëà";
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
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnName, this->columnHeader8,
					this->columnHeader3
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(834, 318);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &MyForm::ListView1_ColumnClick);
			// 
			// columnName
			// 
			this->columnName->Text = L"Íàèìåíîâàíèå";
			this->columnName->Width = 140;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Ïîñòóïëåíèå";
			this->columnHeader8->Width = 117;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L" Îñòàòîê";
			this->columnHeader3->Width = 121;
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->òîâàğûToolStripMenuItem,
					this->êëèåíòûToolStripMenuItem, this->ïîñòàâùèêèToolStripMenuItem, this->äîêóìåíòûToolStripMenuItem, this->ïîñòóïëåíèåToolStripMenuItem1,
					this->ğàñõîäToolStripMenuItem1
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->ìåíşToolStripMenuItem->Text = L"  Ìåíş";
			// 
			// ìàãàçèíûToolStripMenuItem
			// 
			this->ìàãàçèíûToolStripMenuItem->Name = L"ìàãàçèíûToolStripMenuItem";
			this->ìàãàçèíûToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->ìàãàçèíûToolStripMenuItem->Text = L" Êëèåíòû";
			// 
			// êëèåíòûToolStripMenuItem
			// 
			this->êëèåíòûToolStripMenuItem->Name = L"êëèåíòûToolStripMenuItem";
			this->êëèåíòûToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->êëèåíòûToolStripMenuItem->Text = L"Êëèåíòû";
			// 
			// ïîñòàâùèêèToolStripMenuItem
			// 
			this->ïîñòàâùèêèToolStripMenuItem->Name = L"ïîñòàâùèêèToolStripMenuItem";
			this->ïîñòàâùèêèToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ïîñòàâùèêèToolStripMenuItem->Text = L"Ïîñòàâùèêè";
			// 
			// äîêóìåíòûToolStripMenuItem
			// 
			this->äîêóìåíòûToolStripMenuItem->Name = L"äîêóìåíòûToolStripMenuItem";
			this->äîêóìåíòûToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->äîêóìåíòûToolStripMenuItem->Text = L"Äîêóìåíòû";
			// 
			// ïîñòóïëåíèåToolStripMenuItem1
			// 
			this->ïîñòóïëåíèåToolStripMenuItem1->Name = L"ïîñòóïëåíèåToolStripMenuItem1";
			this->ïîñòóïëåíèåToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->ïîñòóïëåíèåToolStripMenuItem1->Text = L"Ïîñòóïëåíèå";
			// 
			// ğàñõîäToolStripMenuItem1
			// 
			this->ğàñõîäToolStripMenuItem1->Name = L"ğàñõîäToolStripMenuItem1";
			this->ğàñõîäToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->ğàñõîäToolStripMenuItem1->Text = L"Ğàñõîä";
			// 
			// òîâàğûToolStripMenuItem
			// 
			this->òîâàğûToolStripMenuItem->Name = L"òîâàğûToolStripMenuItem";
			this->òîâàğûToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->òîâàğûToolStripMenuItem->Text = L"Òîâàğû";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 342);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Ñèñòåìû ó÷¸òà òîâàğîâ â ìàãàçèíå";
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


	private: System::Void ComingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Comings^ form = gcnew Comings();
		form->ShowDialog();
		Console::WriteLine("Comings windows open");
	}
	private: System::Void ConsumptionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Consumptions^ form = gcnew Consumptions();
		form->ShowDialog();
		Console::WriteLine("open windows Consumption");
	}
	private: System::Void ClientsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Clients^ form = gcnew Clients();
		form->ShowDialog();
	}
};
}

