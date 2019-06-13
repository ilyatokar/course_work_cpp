#pragma once
using namespace std;
using namespace System;

ref class Provider
{
public: int id;
public: String^ Name;
public: Provider(int id, String^ Name) {
	this->id = id;
	this->Name = Name;
}
};

