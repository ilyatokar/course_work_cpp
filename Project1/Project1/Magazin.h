#pragma once
#include "Product.h"
#include "Provider.h"
#include "Document.h"
#include "Coming.h"
#include "Consumption.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

public ref class Magazin
{

	public: List<Provider^>^ ArrayProvider;
	public: List<Product^>^ ArrayProduct;
	public: List<Document^>^ ArrayDocument;
	public: List<Coming^>^ ArrayComing;
	public: List<Consumption^>^ ArrayConsumption;

	public: Product^ getObjProductByName(String^ name) {
		for each (Product ^ item in this->ArrayProduct)
		{
			if (item->Name == name)
				return item;
		}
		return nullptr;
	}

	public: Provider^ getObjProviderByName(String^ name) {
		for each (Provider ^ item in this->ArrayProvider)
		{
			if (item->Name == name)
				return item;
		}
		return nullptr;
	}

	public: Document^ getObjDocumentByNumberDogovor(String^ ndog) {
		for each (Document ^ item in this->ArrayDocument)
		{
			if (item->NumberDogovor == ndog)
				return item;
		}
		return nullptr;
	}

};



