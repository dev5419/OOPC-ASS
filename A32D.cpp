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

class AverageCalculator {
private:
    float** arr;
    int rows;
    int cols;

public:
    // Constructor
    AverageCalculator(int r, int c) : rows(r), cols(c) {
        arr = new float*[rows];  // Allocating memory for rows
        for (int i = 0; i < rows; ++i) {
            arr[i] = new float[cols];  // Allocating memory for each row's columns
        }
    }

    // Destructor
    ~AverageCalculator() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i];  // Delete each row
        }
       // delete[] arr;  // Delete the array of rows
        cout << "deleted" << endl;
    }

    // Taking numbers input from user
    void inputNumbers() {
        cout << "Enter " << rows * cols << " numbers:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> arr[i][j];
            }
        }
    }

    // Calculate average
    float calculateAverage() const {
        float sum = 0.0f;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                sum += arr[i][j];
            }
        }
        return sum / (rows * cols);
    }
};

int main() {
    int r, c;
    // Taking number of rows and columns from the user
    cout << "Enter number of rows:" << endl;
    cin >> r;
    cout << "Enter number of columns:" << endl;
    cin >> c;

    if (r <= 0 || c <= 0) {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    AverageCalculator calculator(r, c);
    calculator.inputNumbers();
    float average = calculator.calculateAverage();
    cout << "Average is: " << average << endl;

    return 0;
}
