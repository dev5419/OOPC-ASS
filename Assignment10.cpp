/*
Assignment 10
Write a program to implement run time polymorphism to calculate areas of different polygons.
Name-Dev Sarode
Division-12
Roll no-11260
Date-15/04/2025
*/

#include <iostream>
#include <cmath> //for M_PI and sqrt
using namespace std;

class Polygon{
public:
	virtual void getdata() = 0;
	virtual void calculatearea() = 0;
};

class Rectangle : public Polygon{
private:
	float length, breadth;
public:
	void getdata() override{
		cout<<"Enter length and breadth of rectangle : "<<endl;
		cin>>length>>breadth;
	}
	
	void calculatearea() override{
		cout<<"The area of rectangle is : "<< length*breadth <<endl;
	}
};

class Triangle : public Polygon{
private:
	float base, height;
public:
	void getdata() override{
		cout<<"Enter base and height of traingle : "<<endl;
		cin>>base>>height;
	}
	
	void calculatearea() override{
		cout<<"The area of triangle is : "<< 0.5 * base * height <<endl;
	}
};

class Square : public Polygon{
private:
	float side;
public:
	void getdata() override{
		cout<<"Enter side of square : "<<endl;
		cin>>side;
	}
	
	void calculatearea() override{
		cout<<"The area of square is : "<< side * side <<endl;
	}
};

int main(){

	Triangle t;
	Rectangle r;
	Square s;
	int choice;
	cout << "\nCalculate Area:\n1. Rectangle\n2. Triangle\n3. Square\n4. Exit\nEnter your choice: ";
 	cin >> choice;

 	switch (choice) {
 	
            case 1:
            	r.getdata();
        	r.calculatearea();
        	
                break;
                
            case 2:
            	t.getdata();
        	t.calculatearea();
        	
                break;
                
            case 3:
            	s.getdata();
        	s.calculatearea();
        	
                break;
                
            case 4:
             	cout << "Exiting program.\n";
             	
             	return 0;
             	
            default:
             	cout << "Invalid choice!\n";                         
    	}
    	
    	return 0;
}
