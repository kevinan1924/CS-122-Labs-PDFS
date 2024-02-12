#include "mylibrary.h"
#include <iostream>
#include <string>
void MyLibrary::ignoreCap(std::string& first_str, std::string& second_str) 
{
    for(std::string::size_type i=0; i < first_str.length(); i++)
      {
         first_str[i] = static_cast<char>(tolower(first_str[i]));
      }
      for(std::string::size_type i=0; i < second_str.length(); i++)
      {
         second_str[i] = static_cast<char>(tolower(second_str[i]));
      }      
}
int MyLibrary::returnNegValue()
{
   short NegValue = -1;
   std::cout << "Return Value: " << NegValue << "\n";
   return NegValue;
}
int MyLibrary::returnPosValue()
{
   short PosValue = 1;
   std::cout << "Return Value: " << PosValue << "\n";
   return PosValue;
}
int MyLibrary::returnZero()
{
   short zeroValue = 0;
   std::cout << "Return Value: " << zeroValue << "\n";
   return zeroValue;
}

