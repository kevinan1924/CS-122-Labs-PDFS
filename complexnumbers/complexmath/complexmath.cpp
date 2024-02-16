#include "complexmath.h"
#include <iostream>
#include <cmath>

ComplexMath::ComplexMath() : real(0.0), imag(0.0) {}
ComplexMath::ComplexMath(double real, double imag) : real(real), imag(imag) {}

double ComplexMath::getReal() const
{
   return real;
}

double ComplexMath::getImag() const
{
   return imag;
}

void ComplexMath::setReal(double real)
{
   this->real = real;
}

void ComplexMath::setImag(double imag) 
{
   this->imag = imag;
}

void ComplexMath::display() const
{
   if (imag >= 0)
      std::cout << real << '+' << imag << "i";
   else
      std::cout << real << '-' << -imag << "i";
}

ComplexMath ComplexMath::operator+(const ComplexMath& other) const
{
   return ComplexMath(real + other.real, imag + other.imag);
}

ComplexMath ComplexMath::operator-(const ComplexMath& other) const
{
   return ComplexMath(real - other.real, imag - other.imag);
}

ComplexMath ComplexMath::operator/(const ComplexMath& other) const
{
   double denominator = other.real * other.real + other.imag * other.imag;
   return ComplexMath((real * other.real + imag * other.imag) / denominator,
                      (imag * other.real - real * other.imag) / denominator);
}

ComplexMath ComplexMath::operator*(const ComplexMath& other) const
{
   return ComplexMath(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

double ComplexMath::magnitude() const
{
   return std::sqrt(real * real + imag * imag);
}

ComplexMath ComplexMath::conjugate() const
{
   return ComplexMath(real, -imag);
}
