#ifndef COMPLEXMATH_H
#define COMPLEXMATH_H
#include <cmath>

class ComplexMath
{
private:
   double real;
   double imag;

public:
   ComplexMath();
   ComplexMath(double real, double imag);

   double getReal() const;
   double getImag() const;

   void setReal(double real);
   void setImag(double imag);

   void display() const;

   ComplexMath operator+(const ComplexMath& other) const;
   ComplexMath operator-(const ComplexMath& other) const;
   ComplexMath operator/(const ComplexMath& other) const;
   ComplexMath operator*(const ComplexMath& other) const;

   double magnitude() const;
   ComplexMath conjugate() const;
};

#endif
