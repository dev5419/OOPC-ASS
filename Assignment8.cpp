/*
Assignment 9
Write a program to overload binary operators (<<, >>) for accepting and displaying
Name-Dev Sarode
Division-12
Roll no-11260
Date-22/04/2025
*/

#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(){
    	real = 0;
    	imag = 0;
    }

    friend istream& operator>>(istream& in,Complex &c);
    friend ostream& operator<<(ostream& out,const Complex &c);
};

istream& operator>>(istream& in,Complex &c) {
    cout<<"Enter real part: ";
    in>>c.real;
    
    cout<<"Enter imaginary part: ";
    in>>c.imag;
    
    return in;
}

ostream& operator<<(ostream& out,const Complex &c) {
    out<<"Complex number is: "<<c.real<<"+"<<c.imag<<"i";
    return out;
}

int main() {
    Complex c1;
    cin >> c1;  
    cout << c1;  
    return 0;
}

