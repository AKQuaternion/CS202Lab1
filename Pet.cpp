//
// Created by Chris Hartman on 1/26/21.
//
#include <iostream>
using std::cout;
#include "Pet.hpp"
Pet::Pet() {
   cout << "Constructed a Pet via default constructor.\n";
}

Pet::~Pet() {
   cout << "Destroyed a Pet via destructor.\n";
}

Pet::Pet(const Pet &) {
   cout << "Constructed a Pet via copy constructor.\n";
}

Pet::Pet(int) {
   cout << "Constructed a Pet via (int) constructor.\n";
}
