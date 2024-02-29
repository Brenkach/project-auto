#pragma once
#include <iostream>
#include "Client.h"
using namespace std;
Client::Client() 
	:Client{0, "None", "unknow"} {} 
Client::Client(int newage)
:Client(newage, "None", "Unknow") {}
Client::Client(int newage, string newname)
: Client(newage, newname, "Unknow") {}
Client::Client(int newage, string newname, string newadress)
	: age{newage}, name{newname}, adress{newadress}{}


Client::~Client(){}

void Client::Setname(string nowname) {
	this->name = nowname;
}
void Client::Setage(int nowage) {
	this->age = nowage;
}
void Client::Setadress(string nowadress) {
	this->adress = nowadress;
}
void Client::Displey() {
	cout << "Client name:" << name << endl;
	cout << "Client age" << age << endl;
	cout << "Client adress:" << adress << endl;

}
istream& operator>>(istream& is, Client& client) {
	cout << "Enter Client name: ";
	is >> client.name;

	cout << "Enter Client age: ";
	is >> client.age;

	cout << "Enter Client adress: ";
	is >> client.adress;
	return is;
}
ostream& operator<<(ostream& os, Client & client) {
	os << "Client name:" << client.name << endl;
	os << "Client age" << client.age << endl;
	os << "Client adress:" << client.adress << endl;
	return os;
}
