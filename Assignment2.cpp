/*
Assignment 2
Write a menudriven program to calculate area of circle, rectangle and triangle
Name-Dev Sarode
Division-12
Roll no-11260
Date-18/02/2025
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class shape
{
	public:
	double radius; //Data member
	double length;
	double breadth;
	double base;
	double height;
	double areacircle(){ //Area of circle
		return M_PI*radius*radius;
		}
	double arearectangle(){ //Area of rectangle
		return length*breadth;
		}
	double areatriangle(){ //Area of traingle
		return 0.5*base*height;
		}
	};
int main(){
	shape s; //Creating an object in class
	int i;
	string o;
	do{
	cout<<"Enter the operation you wish to choose:"<<endl;
	cout<<"1. Area of Circle"<<endl;
	cout<<"2. Area of Rectangle"<<endl;
	cout<<"3. Area of Triangle"<<endl;
	cin>>i;
	switch (i){
		case 1:
			cout<<"Enter radius:"; 
			cin>>s.radius; //Taking input in class
			cout<<"Area of Circle is:"<<s.areacircle()<<endl; //Calling member function
			break;
			
		case 2:
			cout<<"Enter length:"; 
			cin>>s.length; //Taking input in class
			cout<<"Enter breadth:";
			cin>>s.breadth; //Taking input in class
			cout<<"Area of Rectangle is:"<<s.arearectangle()<<endl;//Calling member function
			break;
		case 3:
			cout<<"Enter base:";
			cin>>s.base; //Taking input in class
			cout<<"Enter height";
			cin>>s.height; //Taking input in class
			cout<<"Area of Triangle is:"<<s.areatriangle()<<endl;//Calling member function
			break;
		default:
			cout<<"Your details have been Entered incorrectly";
		}
	cout<<"Do you wish to continue(y/n):";
	cin>>o;
	} while(o=="y");
	return 0;
}

