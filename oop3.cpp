#include <iostream>
using namespace std;

// Base class
class Staff {
public:
    string name;
    int staffID;
    string department;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> staffID;
        cout << "Enter Department: ";
        cin >> department;
    }

    void showData() {
        cout << "Name: " << name << ", ID: " << staffID << ", Dept: " << department;
    }
};

// Derived class Teacher
class Teacher : public Staff {
public:
    string subject;
    string qualification;

    void getData() {
        Staff::getData();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void showData() {
        Staff::showData();
        cout << ", Subject: " << subject << ", Qualification: " << qualification << endl;
    }
};

// Derived class Administrator
class Administrator : public Staff {
public:
    string designation;

    void getData() {
        Staff::getData();
        cout << "Enter Designation: ";
        cin >> designation;
    }

    void showData() {
        Staff::showData();
        cout << ", Designation: " << designation << endl;
    }
};

// Derived class Support Staff
class SupportStaff : public Staff {
public:
    string duty;

    void getData() {
        Staff::getData();
        cout << "Enter Duty: ";
        cin >> duty;
    }

    void showData() {
        Staff::showData();
        cout << ", Duty: " << duty << endl;
    }
};

int main() {
    Teacher t;
    Administrator a;
    SupportStaff s;

    cout << "\nEnter Teacher Details:\n";
    t.getData();

    cout << "\nEnter Administrator Details:\n";
    a.getData();

    cout << "\nEnter Support Staff Details:\n";
    s.getData();

    cout << "\n--- Staff Database ---\n";
    t.showData();
    a.showData();
    s.showData();

    return 0;
}
