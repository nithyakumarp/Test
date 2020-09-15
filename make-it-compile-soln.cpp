/*
 * [2019] Signet Lab - Programming for ICT
 * All Rights Reserved.
 * 
 * Authors Filippo Campagnaro and Michele Polese 
*/
#include<iostream>
#include<string>

using namespace std; 

struct Trivial {
  int a; 
  Trivial(int aa) : a(aa) { } 
  Trivial() = default; // use the compiler generated 
                       // constructor
};

// do not modify the enumerators, find some other way
//enum NotScoped {green, blue, red};
//enum SameEnumerators {green, yellow};

enum class NotScoped {green, blue, red};
enum class SameEnumerators {green, yellow};

int main(int argc, char* argv[])
{
  //unsigned int unsigned_integer_variable {-10}
  unsigned int unsigned_integer_variable {10};
  //short short_variable {90000};
  short short_variable {90};

  std::cout << "unsigned_integer_variable " << unsigned_integer_variable
    << " short_variable " << short_variable << std::endl;

  //void* pointer {&unsigned_integer_variable};
  unsigned int* pointer {&unsigned_integer_variable};
  std::cout << "pointer content " << pointer 
    << " value pointed by pointer " << *pointer << std::endl;

  //const char* p = "unipd";
  const char *p = "unipd";
  std::cout << "before modification " << *p << std::endl;
  //(*p) = 'c';
    p = "c";
  std::cout << "after modification " << *p << std::endl;

  Trivial structure{10};
  Trivial* ptr_struct{&structure};

  //std::cout << "Value in struct " << structure->a 
  //<< " with pointer " << ptr_struct.a << std::endl;
   std::cout << "Value in struct " << structure.a 
    << " with pointer " << ptr_struct->a << std::endl;
 
  return 0;
}