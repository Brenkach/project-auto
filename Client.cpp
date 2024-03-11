#pragma once
#include <iostream>
#include "Client.h"
#include "people.cpp"
using namespace std;
Client::Client()
	:People{ "None", "unknow",0 } {}
Client::Client(int newage)
	:People{ "None", "Unknow" , newage } {}
Client::Client(int newage, string newname)
	: People{ newname, "Unknow",newage } {}
Client::Client(int newage, string newname, string newsurname)
	: People{ newname, newsurname,newage } {}
Client::Client(int newage, string newname, string surname, string newadress)
	: People{ newname, surname, age }, adress{ newadress } {}
Client::~Client() {}

Client::Client(int newage, string newname, string surname, string newadress, int number_phone)
	: People{ newname, surname, newage, number_phone }, adress{ newadress } {}


void Client::Setname(string nowname) {
	this->name = nowname;
}
void Client::Setage(int nowage) {
	this->age = nowage;
}
void Client::Setadress(string nowadress) {
	this->adress = nowadress;
}
void Client::Setnumber_phone(int nownumber_phone) {
	this->number_phone = nownumber_phone;
}

void  Client::Displey() {
	People::Displey();
	cout << "Adress: " << adress << endl;
}
istream& operator>>(istream& is, Client& client) {
	cout << "Enter Client name: ";
	is >> client.name;

	cout << "Enter Client age: ";
	is >> client.age;

	cout << "Enter Client adress: ";
	is >> client.adress;

	cout << "Enter Client number: ";
	is >> client.adress;
	return is;
}
ostream& operator<<(ostream& os, Client& client) {
	os << "Client name:" << client.name << endl;
	os << "Client age" << client.age << endl;
	os << "Client adress:" << client.adress << endl;
	os << "Client number:" << client.number_phone << endl;

	return os;
}
