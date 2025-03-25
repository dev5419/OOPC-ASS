/*
Assignment 6
Write a program to find the sum of squares of first n natural numbers using function
without parameter but with return type.
Name-Dev Sarode
Division-12
Roll no-11260
Date-18/03/2025
*/
#include <iostream>
using namespace std;

int sumOfSquares(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    int sum=0;
    
    for (int i=1; i<=n; ++i) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int result=sumOfSquares();
    cout<<"The sum of squares of the first n natural numbers is: "<<result<<endl;
    return 0;
}

