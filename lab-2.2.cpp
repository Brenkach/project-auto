#pragma once
#include <iostream>
#include "Client.h"
#include "car.h"
#include "seler.h"
using namespace std;

int main()
{
	Client Client1;

	Client Client2(18, "Loh", "Pidr","Prospect", 77501016);
	//Seler Seler1;
	Car Car1{ "red", 2020,"volvo" };
	Car Car3{ "black", 2012, "Audi" };
	//Seler Seler1{ 45,"Denis","Prospect" };
	//cout << Seler1 << endl;
	cout << Car3<<endl;
	cout << Car1 << endl;
	Car car2 = Car(Car1);
	cout << car2 << endl;
	 Client1.Displey();
	 Client2.Displey();
}
