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
	name = nowname;
}
void Client::Setage(int nowage) {
	age = nowage;
}
void Client::Setadress(string nowadress) {
	adress = nowadress;
}
void Client::Displey() {
	cout << "Client name:" << name << endl;
	cout << "Client age" << age << endl;
	cout << "Client adress:" << adress << endl;

}
ostream& operator<<(ostream& os, Client & car) {
	os << "Client name:" << car.name << endl;
	os << "Client age" << car.age << endl;
	os << "Client adress:" << car.adress << endl;
}
