#pragma once
#include <iostream>
using namespace std;

class Magazin
{
private:
	string Name;
public:
	Magazin();
	Magazin(string Name);
	~Magazin();
	void SetName(string Name);
	string GetName();
	void save();
};

