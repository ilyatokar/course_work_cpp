#include "Magazin.h"
#include "json.hpp"



Magazin::Magazin()
{
	this->Name = "";
}

Magazin::Magazin(string Name)
{
	this->Name = Name;
}

void Magazin::save()
{
	using json = nlohmann::json;

}


