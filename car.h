#pragma once
#include <iostream>
using namespace std;
 class Car
{
private:
	string color;
	int carage;
	string mark;
public:
	Car();
	Car(string, int, string);
	~Car();
	void Setcolor(string newcolor);
	void Setcarage(int newcarage);
	void Setmark(string newmark);
	void CarDispley();
};


