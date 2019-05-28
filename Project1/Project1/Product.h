#pragma once
#include <iostream>
using namespace std;

class Product
{
private:
	string Name;
public:
	Product();
	Product(string Name);
	~Product();
	void SetName(string Name);
	string GetName();
};

