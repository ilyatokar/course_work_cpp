#pragma once
#include "Product.h"
#include "Provider.h"
#include "Client.h"
#include "Document.h"
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

public ref class Magazin
{
public: List<Provider^>^ ArrayProvider;
public: List<Product^>^ ArrayProduct;
public: List<Client^>^ ArrayClient;
public: List<Document^>^ ArrayDocument;
};

