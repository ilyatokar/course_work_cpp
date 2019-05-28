#pragma once
#include <iostream>
using namespace std;

class Document
{
private:
	string NumberDogovor;
	string Naklodnaya;
public:
	Document();
	Document(string NumberDogovor, string Naklodnaya);
	~Document();
	void SetNumberDogovor(string NumberDogovor);
	void SetNaklodnaya(string Naklodnaya);
	string GetNumberDogovor();
	string GetNaklodnaya();
};

