#include <iostream>
using namespace std;

class Complex {
private:
    float real;   // real part
    float imag;   // imaginary part

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    // Add two complex numbers (member function)
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Multiply two complex numbers (friend function)
    friend Complex operator*(Complex c1, Complex c2);

    // Input and output operator overloading
    friend istream& operator>>(istream &in, Complex &c);
    friend ostream& operator<<(ostream &out, Complex c);
};

// Multiplication of two complex numbers
Complex operator*(Complex c1, Complex c2) {
    Complex temp;
    temp.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    temp.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return temp;
}

// Input complex number
istream& operator>>(istream &in, Complex &c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

// Output complex number
ostream& operator<<(ostream &out, Complex c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number:\n";
    cin >> c1;

    cout << "Enter second complex number:\n";
    cin >> c2;
    sum = c1 + c2;        // add
    product = c1 * c2;    // multiply

    cout << "\nFirst Complex Number : " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "Sum                  : " << sum << endl;
    cout << "Product              : " << product << endl;
    return 0;
}
