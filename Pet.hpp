//
// Created by Chris Hartman on 1/26/21.
//

#ifndef CS202LAB1_PET_HPP
#define CS202LAB1_PET_HPP
#include <string>

class Pet {
public:
   Pet();
   Pet(const Pet &);
   Pet(int);
   ~Pet();
private:
   std::string _name;
};


#endif//CS202LAB1_PET_HPP
