#pragma once
using namespace System;

public ref class Magazin
{
	public: int id;
	public: String^ Name;
	public: Magazin(int id, String^ Name) {
		this->id = id;
		this->Name = Name;
	}

};

