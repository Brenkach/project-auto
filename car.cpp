#pragma once
#include <iostream>
#include "car.h"
using namespace std;
Car::Car(){}
Car::Car(string newcolor = "unknow", int newcarage = 0, string newmark = "none")
:color{newcolor},carage{newcarage}, mark{newmark}{}
Car::~Car(){}
void Car:: Setcolor(string newcolor) {
	color = newcolor;
}
void Car::Setcarage(int newcarage) {
	carage = newcarage;
}
void Car::Setmark(string newmark) {
	mark = newmark;
}
void Car::CarDispley() {
	cout << "Car age:" << carage << endl;
	cout << "Car mark:" << mark << endl;
	cout << "Car color:" << color << endl;
}