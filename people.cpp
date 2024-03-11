#pragma once
#include <iostream>
#include "people.h"
using namespace std;
People::People()
	:name{ "None" }, surname{ "unknow" },age{ 0 } {}
People::People(string newname)
	:People(newname, "Unknow") {}
People::People(string newname, string newsurname)
	: name{ newname }, surname  { newsurname } {}
People::People(string newaname, string newsurname, int age)
	: name{ newaname }, surname{ newsurname }, age{ age } {}
People::People(string newaname, string newsurname, int age, int number_phone)
	: name{ newaname }, surname{ newsurname }, age{ age }, number_phone{ number_phone } {}


People::~People() {}

void People::Setname(string newname) {
	this->name = newname;
}
void People::Setage(int newage) {
	this->age = newage;
}
void People::Setsurname(string newsurname) {
	this->surname = newsurname;
}
void People::Setnumber_phone(int number_phone) {
	this->number_phone = number_phone;
}
void People::Displey() {
	cout << "People name:" << name << endl;
	cout << "People surname:" << surname << endl;
	cout << "People age" << age << endl;
	cout << "People number_phone:" << number_phone << endl;


}