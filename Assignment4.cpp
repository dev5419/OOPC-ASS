/*
Assignment 4
Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) a price (type float) of a
publication. From this class derive two classes: book, which adds a page count (type int)
and tape, which adds a playing time in minutes (type float). Each of these three classes
should have a get data () function to get its data from the user at the keyboard, and a put
data () function to display its data.
Name-Dev Sarode
Division-12
Roll no-11260
Date-25/02/2025
*/
#include<iostream>
#include<string>
using namespace std;

class Publication{
private:
	string title;
	float price;
public:	
	void getdata(){ //take input from the user
		cout<<"Enter title: "<<endl;
		cin>>title;
		//cin.ignore(); //clear buffer
		//getline(cin, title);
		cout<<"Enter price: $"<<endl;
		cin>>price;
	}
	
	void putdata(){ //display input taken from the user
		cout<<"\nTitle : "<<title<<endl;
		cout<<"\nPrice : $"<<price<<endl;
	}
};

class Book : public Publication{ //Derived class of Publication
private:
	int pagecount;
public:
	void getdata(){
		Publication::getdata(); //scope resolution
		cout<<"Enter number of pages: "<<endl;
		cin>>pagecount;
	}
	
	void putdata(){
		Publication::putdata();
		cout << "\nPage count: " << pagecount << " pages" << endl;
	}
};

class Tape : public Publication{ //Derived class of Publication
private:
	float minutes;
public:
	void getdata(){
		Publication::getdata();
		cout<<"Enter number of minutes : ";
		cin>>minutes;
	}
	
	void putdata(){
		Publication::putdata();
		cout<<"\nDuration is : "<<minutes<<" minutes\n"<<endl;
	}
};
int main(){ //main function
	Book book;
	Tape tape;
	book.getdata();
	tape.getdata();
	cout<<"\nDetails are : \n";
	book.putdata();
	tape.putdata();
}
