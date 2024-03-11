#pragma once
#include "people.h"
#include <iostream>
using namespace std;
 class Client : public People
{
private:
	string adress;
public:
	Client();
	Client(int newage);
	Client(int newage, string newname);
	Client(int newage, string newname, string surname);
	Client(int newage, string newname,string surname, string newadress);
	Client(int newage, string newname, string surname, string newadress, int number_phone);

	~Client();
	void Setname(string nowname);
	void Setage(int nowage);
	void Setadress(string nowadress);
	void Setnumber_phone(int number_phone);
	void Displey();
	friend istream& operator>>(istream& os, Client& car);
    friend ostream& operator<<(ostream& os, Client& car);
};
