#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

double NumberToDegrees(double Number) {
    return Number * (180.0 / M_PI);
}

int main() {
    char choice;

    do {
        double Number, degrees;

        // Take input from the user
        cout << "Enter a number to convert to degree: ";
        cin >> Number;

        // Convert radians to degrees
        degrees = NumberToDegrees(Number);

        // Display the result
        cout << "Number in degrees: " << degrees << std::endl;

        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Ask the user if they want to run the program again
        cout << "Do you want to convert another angle? (y/n): ";
        cin >> choice;
    } while (tolower(choice) == 'y');

     cout << "Exiting program. Goodbye!" << std::endl;

     system("pause");

    return 0;
}
