#pragma once
#include <iostream>
#include "Client.h"
#include "car.h"
#include "seler.h"
using namespace std;

int main()
{
	Client Client1;
	Seler Seler1;
	//cout << Car::count << endl;
	Car Car1{ "red", 2020,"volvo" };
	Car Car3{ "black", 2012, "Audi" };
	cout << Car3<<endl;
	//cout << Car::count << endl;
	cout << Car1 << endl;
	Car car2 = Car(Car1);
	cout << car2 << endl;
}
