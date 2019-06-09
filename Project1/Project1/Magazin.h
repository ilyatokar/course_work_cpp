#pragma once
#include <iostream>
#include <string>
using namespace std;

class Magazin
{
private:
	int id;
	string Name;
public:
	Magazin();
	Magazin(int id, string Name);
	~Magazin();
	void SetName(string Name);
	string GetName();
	void save();
};

