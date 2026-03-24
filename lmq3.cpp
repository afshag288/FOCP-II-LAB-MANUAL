#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    int choice;

    cout << "1. Convert Fahrenheit to Celsius\n";
    cout << "2. Convert Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "Temperature in Celsius = " << celsius << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit = " << fahrenheit << endl;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}