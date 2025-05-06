/*
Assignment 11
Write a program with the following:
a. A function to read two double type numbers from the keyboard.
b. A function to calculate the division of these two numbers.
c. A try block to throw an exception when a wrong type of data is keyed in.
d. A try block to detect and throw an exception if the condition “divide-by-zero” occurs.
e. Appropriate catch block to handle the exceptions thrown.

Name-Dev Sarode
Division-12
Roll no-11260
Date-15/04/2025
*/

#include<iostream>
#include<stdexcept>
using namespace std;

class Divider{	
	public:
		double num1, num2;
		
		void getInput(){
			cout << "Enter Num 1 and Num 2 : " << endl;
			if (!(cin >> num1 >> num2)) {
            			throw invalid_argument("Invalid input. Please enter a valid number.");
        		}
 		}
		
		void checkDivision() {
        		if (num2 == 0.0) {
           		throw runtime_error("Division by zero is not allowed.");
       		 }
   		}
		
		double divide() {
        		return num1 / num2;
    		}
    		
    		void displayResult() {
        		cout << "Result: " << divide() << endl;
    		}
};

int main(){
		try {
        		Divider divider;
        		divider.getInput();
        		divider.checkDivision();
        		divider.displayResult();
    		}
    		catch (invalid_argument& e) {
        		cout << "Input error: " << e.what() << endl;
    		}
    		catch (runtime_error& e) {
       		cout << "Runtime error: " << e.what() << endl;
    		}
    		catch (...) {
       		cout << "An unexpected error occurred." << endl;
    		}
	return 0;
}
