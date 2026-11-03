// Program 27: Subtract two complex numbers with operator overloading
// Name: Shreya B Gundali
// Roll No: 573
// Division: E
// SRN: 01fe23bec380
// Semester: 7
// Department: Electronics and Communication Engineering
// College: KLE Technological University, Hubli

//write a c++ program to subtract two complex numbers with operator overloading.

#include <iostream>
using namespace std;

class ComplexNumber
{
    float real, imag;

public:
    ComplexNumber(float r = 0, float i = 0)
        : real(r), imag(i) {}

    ComplexNumber operator+(const ComplexNumber &obj)
    {
        return ComplexNumber(real + obj.real,
                             imag + obj.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};

int main()
{
    ComplexNumber num1(3, 2), num2(5, 4);

    ComplexNumber result = num1 + num2;

    result.display();

    return 0;
}
