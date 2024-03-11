#pragma once
#include <iostream>
#include "people.h"
using namespace std;
 class Seler
{
private:
	int selerage;
	string selername;
	string seleradress;


public:
	Seler();
	Seler(int, string);
	Seler(int, string, string);
	~Seler();
	void selerSetname(string nowname);
	void selerSetage(int nowage);
	void selerSetadress(string nowadress);
	void selerDispley();
};

