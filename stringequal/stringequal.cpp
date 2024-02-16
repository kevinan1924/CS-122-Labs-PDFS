#include "mylibrary/mylibrary.h"
#include <iostream>

int main()
{
   MyLibrary myLib;
   std::string first_str, second_str;

   std::cout << "Enter two strings to compare order.\n";
   std::cout << "Enter first string.\n";
   std::cin >> first_str;

   std::cout << "Enter second string.\n";
   std::cin >> second_str;

   myLib.ignoreCap(first_str, second_str);

if(first_str[0] < second_str[0])
{
   return myLib.returnNegValue();
}
   else if(first_str[0] > second_str[0])
   {
      return myLib.returnPosValue();
   }
   else
   {
      return myLib.returnZero();
   }
}
