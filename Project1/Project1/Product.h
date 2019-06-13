#pragma once
using namespace std;
using namespace System;

ref class Product
{
public: int id;
public: String^ Name;
public: Product(int id, String^ Name){
	this->id = id;
	this->Name = Name;
}
};

