#pragma once
#include <iostream>
#include "people.h"
#include "seler.h"
#include <fstream>

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
string Seler::fileName = "seler.txt";
void Seler::AddSeler() {
	// Відкриття файлу для запису у режимі додавання
	ofstream outFile(fileName, ios::app);

	// Перевірка, чи вдалося відкрити файл
	if (!outFile.is_open()) {
		cerr << "Unable to open file: " << fileName << endl;
		return;
	}

	// Запис полів об'єкта у файл у окремі рядки
	outFile << "name: " << selername << endl;
	outFile << "surname: " << surname << endl;
	outFile << "age: " << selerage << endl;
	outFile << "number_phone: " << number_phone << endl;
	outFile << "adress: " << seleradress << endl;


	// Закриття файлу
	outFile.close();

	cout << "Data Seler has been successfully added to the file." << endl;
}
void Seler::sound()
{
	cout << "seler";
}