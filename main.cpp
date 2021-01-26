#include <iostream>
using std::cout;
#include <vector>
using std::vector;

#include "Pet.hpp"

void passPetByValue(Pet joe) {
   cout << "In passPetByValue.\n";
   cout << "Pet's name is " << joe.getName() << "\n";
   cout << "Changing name to Joe\n";
   joe.setName("Joe");
   cout << "Still in passPetByValue, pet's name is now " << joe.getName() << ".\n";
}

void passPetByReference(Pet &bill) {
   cout << "In passPetByReference.\n";
   cout << "Pet's name is " << bill.getName() << "\n";
   cout << "Changing name to Bill\n";
   bill.setName("Bill");
}

void passPetByReferenceToConst(Pet const &bill) {
   cout << "In passPetByReferenceToConst.\n";
   cout << "Pet's name is " << bill.getName() << "\n";
   //bill.setName("Billy"); // This won't compile, can't change const object
}

Pet returnPetByValue() {
   cout << "In returnPetByValue.\n";
   Pet amy("Amy");
   return amy;
}

int main() {
   cout << "CS 202 Lab 1\n";
   cout << "Create a local variable of an object of your class:\n";
   Pet p;
   cout << "Create a local variable that is a copy of another object of your class:\n";
   Pet q(p);
   cout << "Create a local variable that uses the (const std::string &) constructor:\n";
   Pet r("Tui");
   cout << "Pass an object by value:\n";
   passPetByValue(p);
   cout << "After pass by value, name is " << p.getName() << ".\n";
   cout << "Pass an object by reference:\n";
   passPetByReference(p);
   cout << "After pass by reference, name is " << p.getName() << ".\n";
   cout << "Pass an object by reference to const:\n";
   passPetByReferenceToConst(p);
   cout << "Return an object by value:\n";
   Pet a = returnPetByValue();
   cout << "Returned object is named " << a.getName() << ".\n";
   cout << "Create a vector of 5 objects:\n";
   vector<Pet> v(5);
   return 0;
}
