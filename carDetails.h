#pragma once
#include <iostream>
using namespace std;
class Details
{

private:
	string name;
	int age;

public:
	Details();
	Details(string name);
	Details(string name, int age);
	~Details();

	bool isNewDetails();


};
