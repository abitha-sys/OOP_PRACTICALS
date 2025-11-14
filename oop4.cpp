#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

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

    // Addition
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Multiplication
    Complex operator*(Complex c) {
        Complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    // Input operator >> overloading (NO friend)
    istream& operator>>(istream &in) {
        cout << "Enter real part: ";
        in >> real;
        cout << "Enter imaginary part: ";
        in >> imag;
        return in;
    }

    // Output operator << overloading (NO friend)
    ostream& operator<<(ostream &out) {
        out << real << " + " << imag << "i";
        return out;
    }
};

int main() {
    Complex c1, c2, sum, product;

    cout << "Enter first complex number:\n";
    cin >> c1;   // calls operator>>()

    cout << "\nEnter second complex number:\n";
    cin >> c2;

    sum = c1 + c2;
    product = c1 * c2;

    cout << "\nFirst Complex Number  : ";
    cout << c1 << endl;

    cout << "Second Complex Number : ";
    cout << c2 << endl;

    cout << "Sum                   : ";
    cout << sum << endl;

    cout << "Product               : ";
    cout << product << endl;

    return 0;
}
