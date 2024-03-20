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
	Client(int newage, string newname, string surname, string newadress);
	Client(int newage, string newname, string surname, string newadress, int number_phone);
	Client(const Client& other);
	Client(Client&& other) noexcept;
	Client& operator=(const Client& other);
	~Client();
	void Displey() const override;
	friend istream& operator>>(istream& os, Client& car);
	friend ostream& operator<<(ostream& os, Client& car);

};
