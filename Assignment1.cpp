/*
Assignment 1
Write a C++ program to take input of student details(Roll no, Name, Branch) and display it.
Name-Dev Sarode
Division-12
Roll no-11260
Date-18/02/2025
*/
#include<iostream>
#include<string>
using namespace std;

class student
	{
	public:
	string name;
	int division;
	int marks;
	float sgpa;
	void details()
		{
			cout << "Name - "<<name <<endl;
			cout <<"Division - "<<division <<endl;
			cout << "C Marks - "<<marks <<endl;
			cout << "SGPA - "<<sgpa <<endl;
		}
	};
	
	int main()
	{
		student s1;
		s1.name = "Dev" ;        // accessing object
		s1.division = 12 ;
		s1.marks = 95 ;
		s1.sgpa = 9.5;
		s1.details();    //calling via object
		return 0;
	}
