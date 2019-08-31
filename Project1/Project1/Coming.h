#pragma once
#include "Product.h"
#include "Provider.h"
#include "Document.h"

using namespace System;
ref class Coming
{
public: unsigned long id;
public: Product^ objProduct;
public: Provider^ objProvider;
public: Document^ objDocument;
public: int count;
public: long price;
};

