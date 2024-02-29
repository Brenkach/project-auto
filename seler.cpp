#pragma once
#include <iostream>
#include "Seler.h"
using namespace std;
Seler::Seler()
	:Seler{ 0, "None", "unknow" } {}
Seler::Seler(int newselerage, string newselername)
	:Seler{ newselerage, newselername, "Unknow" } {}
Seler::Seler(int newselerage, string newselername, string newseleradress)
	: selerage{ newselerage }, selername{ newselername }, seleradress{ newseleradress } {}


Seler::~Seler() {}

void Seler::selerSetname(string selername) {
	this->selername = selername;
}
void Seler::selerSetage(int selerage) {
	this->selerage = selerage;
}
void Seler::selerSetadress(string seleradress) {
	this->seleradress = seleradress;
}
void Seler::selerDispley() {
	cout << "Seler name:" << selername << endl;
	cout << "Seler age" << selerage << endl;
	cout << "Seler adress:" << seleradress << endl;
}
