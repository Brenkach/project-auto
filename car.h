#pragma once
#include <iostream>
#include "carDetails.h"


using namespace std;
 class Car 
{
private:
	string color;
	int carage;
	string mark;
	static int count;
	Details motor;
	static string fileName;

public:
	
	Car();
	Car(string newcolor, int newcarage, string newmark);
	Car(const Car& other);
	~Car();
	void Setcolor(string newcolor);
	void Setcarage(int newcarage);
	void Setmark(string newmark);
	void showNewDetails();
	static int GetCount();
	void CarDispley();
	void AddCar();
	void AllCars();
	friend istream& operator>>(istream& is, Car& car);
	friend ostream& operator<<(ostream& os, Car& car);    
};
 





