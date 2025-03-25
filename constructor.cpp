/*Write a C++ program to take input of student details(Roll no, Name, Branch) and display it.*/

#include<iostream>
#include<string>

using namespace std;

class student
{
	public:
	int roll;
	string name,department;
	student(int a,string b)
		{
		roll=a;
		name=b;
		department="Basic Science of Engineering";
		}
	student()
		{
		roll=0;
		name="-";
		department="Basic Science of Engineering";
		}
	~student()
		{
		cout<<"Object Destroyed"<<endl;
		}
	void display()
	{
	cout<<"Roll:"<<roll<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Department:"<<department<<endl;
	}
};

int main()
{
	student s1(11260,"Dev");
	student s2;
	s1.display();
	s2.display();
	return 0;
}
