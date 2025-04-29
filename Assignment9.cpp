/*
Assignment 9
Write a program to overload binary operators (<<, >>, +, -, *, /) for accepting and displaying
Name - Dev Sarode
Division - 12
Roll no - 11260
Date - 22/04/2025
*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    friend istream& operator>>(istream& in, Complex &c);
    friend ostream& operator<<(ostream& out, const Complex &c);

    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }
    
    Complex operator*(const Complex &c) const {
    	return Complex(real * c.real, imag * c.imag);
    }
};

istream& operator>>(istream& in, Complex &c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

ostream& operator<<(ostream& out, const Complex &c) {
    out << "Complex number is: " << c.real;
    if (c.imag >= 0)
        out << "+" << c.imag << "i";
    else
        out << c.imag << "i";
    return out;
}

int main() {
    Complex c1, c2, sum, diff, prod;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "\nEnter second complex number:\n";
    cin >> c2;

    sum = c1 + c2;
    diff = c1 - c2;
    prod = c1 * c2;

    cout << "\nFirst ";
    cout << c1 << endl;

    cout << "Second ";
    cout << c2 << endl;

    cout << "\nAddition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;
    cout << "Multiplication: " << prod << endl;

    return 0;
}

