#pragma once
#include <iostream>
using namespace std;
 class Client
{
private:
	int age;
	string name;
	string adress;
public:
	Client();
	Client(int newage);
	Client(int newage, string newname);
	Client(int newage, string newname, string newadress);
	~Client();
	void Setname(string nowname);
	void Setage(int nowage);
	void Setadress(string nowadress);
	void Displey();
	friend istream& operator>>(istream& os, Client& car);
    friend ostream& operator<<(ostream& os, Client& car);
};
