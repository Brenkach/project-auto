#include <iostream>
#include "Interface.h"
using namespace std;


Interface::~Interface() {}

ostream& operator<<(ostream& os, const Interface& obj) {
    obj.print(os);                  // Interface
    return os;
}