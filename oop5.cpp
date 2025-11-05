#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    double num1, num2;
    
public:
    // Member function to input data - defined only in base class
    void getData() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    
    // Pure virtual function for display - must be redefined in derived classes
    virtual void displayArea() = 0;
};

// Triangle class - derived from Shape
class Triangle : public Shape {
public:
    // Redefine pure virtual function for triangle
    void displayArea() {
        double area = 0.5 * num1 * num2;
        cout << "Triangle Area = 1/2 * " << num1 << " * " << num2 << " = " << area << endl;
    }
};

// Rectangle class - derived from Shape
class Rectangle : public Shape {
public:
    // Redefine pure virtual function for rectangle
    void displayArea() {
        double area = num1 * num2;
        cout << "Rectangle Area = " << num1 << " * " << num2 << " = " << area << endl;
    }
};

int main() {
    int choice;
    
    cout << "=== GEOMETRICAL SHAPES AREA CALCULATOR ===" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "Enter your choice (1-2): ";
    cin >> choice;
    
    // Declare derived class objects
    Triangle triangleObj;
    Rectangle rectangleObj;
    
    Shape* shape;  // Base class pointer
    
    switch(choice) {
        case 1:
            shape = &triangleObj;  // Assign address of triangle object to base pointer
            cout << "\n--- Triangle ---" << endl;
            break;
            
        case 2:
            shape = &rectangleObj; // Assign address of rectangle object to base pointer
            cout << "\n--- Rectangle ---" << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }
    
    // Get data using base class function
    shape->getData();
    
    // Display area using virtual function (calls appropriate derived class function)
    shape->displayArea();
    
    return 0;
}
