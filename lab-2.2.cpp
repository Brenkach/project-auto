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
	Car Car1{ "yelow", 2020,"volvo" };
	Car1.CarDispley();
	cout << "test";
}
