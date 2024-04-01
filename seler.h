#pragma once
#include <iostream>
#include "people.h"
using namespace std;
 class Seler : public People
{
private:
	int selerage;
	string selername;
	string seleradress;
	static string fileName;

public:
	Seler();
	Seler(int, string);
	Seler(int, string, string);
	~Seler();
	void selerSetname(string nowname);
	void AddSeler();
	void selerSetage(int nowage);
	void selerSetadress(string nowadress);
	void selerDispley();
	virtual void sound() override;
};

