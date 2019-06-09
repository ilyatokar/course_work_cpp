#include "Magazin.h"
#include "json.hpp"



Magazin::Magazin()
{
	this->id = 0;
	this->Name = "";
}

Magazin::Magazin(int id, string Name)
{
	this->id = id;
	this->Name = Name;
}

void Magazin::save()
{
	using json = nlohmann::json;
}


