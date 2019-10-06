#pragma once
#include "Product.h"
#include "Provider.h"
#include "Document.h"
#include "Coming.h"
#include "Consumption.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace Newtonsoft::Json;
using namespace Newtonsoft::Json::Linq;
using namespace System::IO;

public ref class Magazin
{
	private: String^ pathDB = Application::StartupPath + "/db/";
	private: String^ fileDBName = "magazins.json";

	public: List<Provider^>^ ArrayProvider;
	public: List<Product^>^ ArrayProduct;
	public: List<Document^>^ ArrayDocument;
	public: List<Coming^>^ ArrayComing;
	public: List<Consumption^>^ ArrayConsumption;

	public: unsigned int getIdProductByName(String^ name) {
		for each (Product ^ item in this->ArrayProduct)
		{
			if (item->Name == name)
				return item->id;
		}
		return 0;
	}

	public: String^ getNameProductById(unsigned int id) {
		for each (Product ^ item in this->ArrayProduct)
		{
			if (item->id == id)
				return item->Name;
		}
		return "";
	}

	public: unsigned int getIdProviderByName(String^ name) {
		for each (Provider ^ item in this->ArrayProvider)
		{
			if (item->Name == name)
				return item->id;
		}
		return 0;
	}

	public: String^ getNameProviderById(unsigned int id) {
		for each (Provider ^ item in this->ArrayProvider)
		{
			if (item->id == id)
				return item->Name;
		}
		return "";
	}


	public: unsigned int getIdDocumentByNumberDogovor(String^ ndog) {
		for each (Document ^ item in this->ArrayDocument)
		{
			if (item->NumberDogovor == ndog)
				return item->id;
		}
		return 0;
	}
public: String^ getNumberDogovorById(unsigned int id) {
	for each (Document ^ item in this->ArrayDocument)
	{
		if (item->id == id)
			return item->NumberDogovor;
	}
	return "";
}

	public: System::Void WriteToFile() {
		File::WriteAllText(pathDB + fileDBName, JsonConvert::SerializeObject(this));
	}

};



