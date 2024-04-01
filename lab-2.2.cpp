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
    Client Client1;
    cin >> Client1;
    cout << Client1 << endl;
    Client1.AddClient();
}
void AddSeler()
{
    Seler Seler1;
    cin >> Seler1;
    cout << Seler1 << endl;
    Seler1.AddSeler();
}
int main()
{
    int choice;
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add Car" << endl;
        cout << "2. Display All Cars" << endl;
        cout << "3. Add Client" << endl;
        cout << "4. Display All Client" << endl;
        cout << "5. Add Seler" << endl;
        cout << "6. Display All Selers" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            AddCar();
            break;
        case 2:
            //DisplayAllCars();
            break;
        case 3:
            AddClient();
            break;
        case 4:
          //  DisplayAllBuyers();
            break;
        case 5:
            AddSeler();
            break;
        case 6:
          //  DisplayAllSellers();
            break;
        case 7:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
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

