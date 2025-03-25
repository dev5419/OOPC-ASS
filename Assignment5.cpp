/*
Assignment 5
Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other classes named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket.
Name-Dev Sarode
Division-12
Roll no-11260
Date-18/03/2025
*/

#include<iostream>
using namespace std;

//Base class basket
class basket{
public:
	char basket[8] = {'M','A','A','M','A','A','M','A'}; 
};

//Derived class Apples
class apples : private basket{
public:
	int applecount=0;
	
	int Apples(){
	for(int i=0; i<8; i++){
		if(basket[i] == 'A'){
			applecount++;
	}
	}
	return applecount;
	}
};

//Derived class Mangoes
class mangoes : private basket{
public:
	int mangocount=0;
	
	int Mangoes(){
	for(int i=0; i<8; i++){
		if(basket[i] == 'M'){
			mangocount++;
	}
	}
	return mangocount;
	}
};

//Derived class Fruits
class fruits : private apples, private mangoes{
public:
	int fruits;
	void totalfruits(){
		fruits = Apples() + Mangoes();
		cout<<"Total fruits in basket are : "<<fruits<<endl;
		cout<<"No. of Apples in basket are : "<<applecount<<endl;
		cout<<"No. of Mangoes in basket are : "<<mangocount<<endl;
	}
	
};

//Main Function
int main(){
	fruits b1;
	b1.totalfruits();
	return 0;
}
