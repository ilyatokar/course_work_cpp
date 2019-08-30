#pragma once
#include "Product.h"
#include "Provider.h"
#include "Document.h"
#include "Coming.h"
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

public ref class Magazin
{
public: List<Provider^>^ ArrayProvider;
public: List<Product^>^ ArrayProduct;
public: List<Document^>^ ArrayDocument;
public: List<Coming^>^ ArrayComing;

public: String^ getNameProductById(int id) {
	String^ name = "";
	for (int i = 0; i < ArrayProduct->Count; i++)
	{
		if ((int)ArrayProduct[i]->id == (int)id) {
			name = ArrayProduct[i]->Name;
		}
	}
	return name;
}
};

