/*
    Professor: Dr. Barnett
    Programmer: Ryan Posey
    Assignment: A1
    Class: CS1C
    Purpose: Practice using poitners
*/
#include <iostream>

using namespace std;

int main() {
    int x = 5; // init variable
    int *xPtr = &x; // init pointer

    // Print variables
    cout << "x: " << x << endl;
    cout << "*x: " << &x << endl;
    cout << "xPtr: " << xPtr << endl;
    cout << "*xPtr: " << *xPtr << endl;

    x = 10; // Change value of x

    cout << "New x value: " << x << endl; // Print x with modified value

    return 0;
}