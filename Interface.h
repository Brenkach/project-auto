 #pragma once
#include <iostream>
using namespace std;
class Interface {

    friend ostream& operator<<(ostream& os, const Interface& obj);
public:
    virtual void print(ostream& os)const = 0;
    virtual ~Interface();

};