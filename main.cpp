#include <iostream>
using std::cout;
#include "Pet.hpp"

void passPetByValue(Pet joe) {
cout << "In passPetByValue.\n";
}

void passPetByReference(Pet &bill) {
   cout << "In passPetByReference.\n";
}

int main() {
   cout << "CS 202 Lab 1\n";
   cout << "Create a local variable of an object of your class:\n";
   Pet p;
   cout << "Create a local variable that is a copy of another object of your class:\n";
   Pet q(p);
   cout << "Create a local variable that uses the int constructor:\n";
   Pet r(100);
   cout << "Pass an object by value:\n";
   passPetByValue(p);
   cout << "Pass an object by reference:\n";
   passPetByReference(p);
   return 0;
}
