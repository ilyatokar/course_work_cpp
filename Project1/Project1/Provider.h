#pragma once
#include <iostream>
using namespace std;

class Provider
{
private:
	string Name;

public:
	Provider();
	Provider(string Name);
	~Provider();
	void SetName(string Name);
	string GetName();
};

