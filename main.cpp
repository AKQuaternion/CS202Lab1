#include <iostream>
using std::cout;
#include "Pet.hpp"

int main() {
   cout << "CS 202 Lab 1\n";
   cout << "Create a local variable of an object of your class:\n";
   Pet p;
   cout << "Create a local variable that is a copy of another object of your class:\n";
   Pet q(p);
   return 0;
}
