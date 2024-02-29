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
	//cout << Car::count << endl;
	cout << Car1;
	Car car2 = Car(Car1);
	cout << car2;
}
