#pragma once
#include <iostream>
#include "Client.h"
#include "car.h"
#include "seler.h"
using namespace std;


void displeyInfoOnUI(const People& people) {
	cout << "---------------------------------------------" <<endl;
	people.Displey();
	cout << "---------------------------------------------" << endl;
}
int main()
{
	/*Client Client1;
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
	 cout << "" << endl;
	*/
Client Client2(18, "Denus", "Brenkach","Prospect", 38077501016);
 Client2.Displey();
// People People1("Maksym", "Grushko");
// People1.Displey();//static 
 //People* client1 = new Client();//base class pointer
// client1->Setname("John");
//displeyInfoOnUI(*client1);
//delete client1;
Client Client3;
Client3.Setname("name");
People& People2 = Client3;
People2.sound();
//Base class referens
//displeyInfoOnUI(People2);
}

