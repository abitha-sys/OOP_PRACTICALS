#include <iostream>
using namespace std;

// Function to read two double numbers
void readNumbers(double &a, double &b) {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

// Function to calculate division
double divide(double a, double b) {
    if (b == 0) {
        // Throw an exception if denominator is zero
        throw runtime_error("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    double num1, num2, result;

    readNumbers(num1, num2);

    try {
        result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } 
    catch (runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program ended normally." << endl;
    return 0;
}
