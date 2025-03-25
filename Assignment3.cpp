/*
Assignment 3
Write a program that reads a group of numbers from the user and places them in an
array of type float. Once the numbers are stored in the array, the program should average
them and print the result. Use pointer notation wherever possible.
Name-Dev Sarode
Division-12
Roll no-11260
Date-25/02/2025
*/
#include <iostream>
using namespace std;

class Averagecalculator{
private:
	float* arr;
	int size;
public:
	//Contructor
	Averagecalculator (int n) : size(n){
		arr = new float(n);
	}
	//Destructor
	~Averagecalculator(){
		delete[] arr;
		cout<<"deleted"<<endl;
	}
	//Taking numbers input from user
	void inputnumbers(){
		cout << "Enter" << size << "numbers:" << endl;
		float* end = arr + size;
		for(float* ptr = arr; ptr!= end;++ptr){
		cin >> * ptr;
		}
	}
	//Calculate average
	float calculateAverage() const {
        	float sum = 0.0f;
        	float* end = arr + size;
        	for (float* ptr = arr; ptr != end; ++ptr) {
        	sum += *ptr;
        }return sum / size;
}
};

int main(){
	int n;
	//Taking number of elements in array from user
	cout<<"Enter size of the array:"<<endl;
	cin>>n;
	if(n<=0){
		cout<<"Invalid number of elements:";
		return 1;
	}
	Averagecalculator calculator(n);
	calculator.inputnumbers();
	float average = calculator.calculateAverage();
	cout << "Average is:" <<average << endl;
	return 0;
}
