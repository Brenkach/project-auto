#pragma once
#include <iostream>
using namespace std;
class People
{
protected:
	string name;
	string surname;
	int age;
	int number_phone;


public:
	People();
	People(string newname);
	People(string newname, string newsurname);
	People(string newname, string newsurname, int newage);
	People(string newname, string newsurname, int newage, int newnumer_phone);
	People(const People& other);//copy
	People(People&& other) noexcept;//move
	People& operator = (const People& other);//operator =
	~People();
	void Setname(string name);
	void Setsurname(string surname);
	void Setage(int age);
	void Setnumber_phone(int number_phone);
	void Displey();
};

