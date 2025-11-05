#include <iostream>
using namespace std;

// Function to divide two numbers
double divide(double a, double b) {
if (b == 0) {
throw "Division by zero!"; // throw exception (const char*)
}
return a / b;
}

int main() {
double num1, num2;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;

try {
double result = divide(num1, num2);

cout << "Result = " << result << endl;
}
catch (const char* msg) { // must match throw type
cout << "Error: " << msg << endl;
}

return 0;
}
