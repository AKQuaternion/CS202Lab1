#include <iostream>
using std::cout;
#include <vector>
using std::vector;

#include "Pet.hpp"

void passPetByValue(Pet joe) {
cout << "In passPetByValue.\n";
}

void passPetByReference(Pet &bill) {
   cout << "In passPetByReference.\n";
}

void passPetByReferenceToConst(Pet const &bill) {
   cout << "In passPetByReferenceToConst.\n";
}

Pet returnPetByValue() {
   cout << "In returnPetByValue.\n";
   Pet amy;
   return amy;
}

int main() {
   cout << "CS 202 Lab 1\n";
   cout << "Create a local variable of an object of your class:\n";
   Pet p;
   cout << "Create a local variable that is a copy of another object of your class:\n";
   Pet q(p);
   cout << "Create a local variable that uses the int constructor:\n";
   Pet r("Tui");
   cout << "Pass an object by value:\n";
   passPetByValue(p);
   cout << "Pass an object by reference:\n";
   passPetByReference(p);
   cout << "Pass an object by reference to const:\n";
   passPetByReferenceToConst(p);
   cout << "Return an object by value:\n";
   returnPetByValue();
   cout << "Create a vector of 5 objects:\n";
   vector<Pet> v(5);
   return 0;
}
