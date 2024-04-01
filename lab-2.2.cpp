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
void InterfaceForAll(Interface & obj) {
	cout << obj;                 // Interface
}
void AddCar()
{
	//"введіть поля машини"
	//створити нову машину
	//викликати метод AddCar()
	Car Car1;
	cin >> Car1;
	cout << Car1 << endl;
	Car1.AddCar();
}
void AddClient()
{

}
void AddSeler()
{

}
int main()
{
	AddCar();
//	//Seler Seler1;
//	Car Car3{ "black", 2012, "Audi" };
//	Seler Seler1{ 18,"Denis","Prospect" };
//	Seler1.AddSeler();
//	//cout << Seler1 << endl;
//	cout << Car3<<endl;
//	Car car2 = Car(Car1);
//	cout << car2 << endl;
//Client Client2(18, "Denus", "Brenkach","Prospect", 55555);
//Client2.AddClient();
// Client2.Displey();
// People& People1=Client2;
//People1.Displey();//static 
// People* client1 = new Client();//base class pointer
// client1->Setname("John");
//displeyInfoOnUI(*client1);
//delete client1;
//Client Client3;//referens
//Client3.Setname("name");
//People& People2 = Client3;
//People2.sound();
//InterfaceForAll(People2);//interface
//Base class referens
//displeyInfoOnUI(People2);

}

