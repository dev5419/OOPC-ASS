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
#include <iostream>
using namespace std;

// Base class: Mango
class Mango {
protected:
    int mangoCount;
public:
    Mango() : mangoCount(0) {}

    void setMangoCount(int count) {
        mangoCount = count;
    }

    int getMangoCount() const {
        return mangoCount;
    }
};

// Base class: Apple
class Apple {
protected:
    int appleCount;
    
public:
    Apple() : appleCount(0) {}

    void setAppleCount(int count) {
        appleCount = count;
    }

    int getAppleCount() const {
        return appleCount;
    }
};

// Derived class: Fruits
class Fruits : public Mango, public Apple {
public:
    Fruits(int appleCount, int mangoCount) {
        setAppleCount(appleCount);
        setMangoCount(mangoCount);
    }

    void printAppleCount() const {
        cout << "Number of apples: " << getAppleCount() << endl;
    }

    void printMangoCount() const {
        cout << "Number of mangoes: " << getMangoCount() << endl;
    }

    void printTotalFruits() const {
        int total = getAppleCount() + getMangoCount();
        cout << "Total number of fruits in the basket: " << total << endl;
    }
};

int main() {
    int applesCount, mangoesCount;

    cout << "Enter the number of apples: ";
    cin >> applesCount;

    cout << "Enter the number of mangoes: ";
    cin >> mangoesCount;

    Fruits basket(applesCount, mangoesCount);

    basket.printAppleCount();
    basket.printMangoCount();

    basket.printTotalFruits();

    return 0;
}

