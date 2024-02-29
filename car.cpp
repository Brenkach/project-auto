#pragma once
#include <iostream>
#include "car.h"
using namespace std;
Car::Car() {
	count++;
}
Car::Car(string newcolor = "unknow", int newcarage = 0, string newmark = "none")
	:color{ newcolor }, carage{ newcarage }, mark{ newmark } {
	count++;
}
// Конструктор копіювання
Car::Car(const Car& other) {
	color = other.color;
	carage = other.carage;
	mark = other.mark;
	count++; // Збільшуємо лічильник при копіюванні
}

int Car::GetCount() {
	return count;
}

Car::~Car() {}
void Car::Setcolor(string newcolor) {
	this->color = newcolor;
}
void Car::Setcarage(int newcarage) {
	this->carage = newcarage;
}
void Car::Setmark(string newmark) {
	this->mark = newmark;
}
void Car::CarDispley() {
	cout << "Car age:" << carage << endl;
	cout << "Car mark:" << mark << endl;
	cout << "Car color:" << color << endl;
}
int Car::count = 0;

istream& operator>>(istream& is, Car& car) {
	cout << "Enter Car age: ";
	is >> car.carage;

	cout << "Enter Car mark: ";
	is >> car.mark;

	cout << "Enter Car color: ";
	is >> car.color;
	return is;

}
ostream& operator<<(ostream& os, Car& car) {
	os << "Car age:" << car.carage << endl;
	os << "Car mark" << car.mark << endl;
	os << "Car color:" << car.color << endl;
	return os;
}