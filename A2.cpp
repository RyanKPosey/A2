/*
    Professor: Dr. Barnett
    Programmer: Ryan Posey
    Assignment: A2
    Class: CS1C
    Purpose: Practice using dynamically allocated arrays
*/
#include <iostream>

using namespace std;

int main() {
    int n; // init n
    // Init calculated variables;
    int sum = 0;
    float avg = 0;
    int min = 0;
    int max = 0;

    // Get user input for array size;
    cout << "Enter an array size: ";
    cin >> n;

    int* arr = new int[n]; // init array

    // Fill array
    for (int i = 0; i < arr.size(); i++) {
        int userInput;
        cout << "Enter value att arr index " << i << ": ";
        cin >> userInput;

        *(arr + i) = userInput;

        // Add to sum
        sum += userInput;
        
        // Check if min
        if (i = 0 || userInput < min) {
            min = userInput;
        }

        // Check if max
        if (i = 0 || userInput > max) {
            max = userInput;
        }
    }

    avg = sum/n; // Calculate average;
 
    for (int i = 0; i < n; i++) {
        cout << "Arr index " << i << ": " << arr[i] << endl; // Print new array values

        
    }

    delete[] arr; //Free memory
    arr = nullptr;
    
    return 0;
}