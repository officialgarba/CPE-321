#include <iostream>
#include <cmath>
using namespace std;

// Function to add numbers from 1 to 10
int addNumbers() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    return sum;
}

// Function to find the square root of a number
double findSquareRoot(double number) {
    return sqrt(number);
}

// Function to solve a quadratic equation: ax^2 + bx + c = 0
void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2*a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    } else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    int choice;
    cout << "Choose the function to execute:" << endl;
    cout << "1. Add numbers from 1 to 10" << endl;
    cout << "2. Find the square root of a number" << endl;
    cout << "3. Solve a quadratic equation" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            cout << "Sum of numbers from 1 to 10: " << addNumbers() << endl;
            break;
        }
        case 2: {
            double number;
            cout << "Enter a number to find its square root: ";
            cin >> number;
            cout << "Square root of " << number << " is: " << findSquareRoot(number) << endl;
            break;
        }
        case 3: {
            double a, b, c;
            cout << "Enter coefficients for the quadratic equation (ax^2 + bx + c = 0): ";
            cin >> a >> b >> c;
            cout << "Solving quadratic equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
            solveQuadraticEquation(a, b, c);
            break;
        }
        default: {
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
