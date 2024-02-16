#include "complexmath.h"
#include <iostream>

int main() {

   double real, imag;

   std::cout << "Enter a real number for a: \n";
   std::cin >> real;
   std::cout << "Enter a imag number for a: \n";
   std::cin >> imag;

   ComplexMath a(real, imag);
   
   std::cout << "Enter a real number for b: \n";
   std::cin >> real;
   std::cout << "Enter a imag number for b: \n";
   std::cin >> imag;
   
   ComplexMath b(real, imag);

   ComplexMath sum_result = a + b;
   ComplexMath difference_result = a - b;
   ComplexMath product_result = a * b;
   ComplexMath quotient_result = a / b;   

   std::cout << "Sum: ";
   sum_result.display();
   std::cout << "\n";

   std::cout << "Difference: ";
   difference_result.display();
   std::cout << "\n";

   std::cout << "Product: ";
   product_result.display();
   std::cout << "\n";

   std::cout << "Quotient: ";
   quotient_result.display();
   std::cout << "\n";

   std::cout << "Magnitude: " << a.magnitude() << "\n";

   ComplexMath conjugate_a = a.conjugate();
   std::cout << "Conjugate: ";
   conjugate_a.display();
   std::cout << "\n";

   return 0;
}
