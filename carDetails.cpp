#pragma once
#include <iostream>
#include "carDetails.h"
using namespace std;


Details::Details()
        : name{ "None" }, age{ 0 } {}

 Details:: Details(string name)
        : Details(name, 0) {}

 Details::Details(string name, int age)
        : name{ name }, age{ 0 } {}
 Details::~Details(){}

 bool Details::isNewDetails() {
	 if (age > 10)
	 {
		 return true;
	 }
	 else {
		 return false;
	 }
 }

   


