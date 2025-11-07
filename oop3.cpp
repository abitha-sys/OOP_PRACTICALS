#include <string>
using namespace std;

// Base class
class Staff {
protected:
    int id;
    string name;
    string qualification;
public:
    void getStaffData() {
        cout << "Enter Staff ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayStaffData() {
        cout << "\nStaff ID: " << id;
        cout << "\nName: " << name;
        cout << "\nQualification: " << qualification;
    }
};

// Derived class 1: Teaching staff
class Teaching : public Staff {
    string subject;
    string designation;
    int publications;
public:
    void getData() {
        cout << "\n--- Enter Teaching Staff Details ---\n";
        getStaffData();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Number of Publications: ";
        cin >> publications;
    }

    void display() {
        cout << "\n--- Teaching Staff Details ---";
        displayStaffData();
        cout << "\nSubject: " << subject;
        cout << "\nDesignation: " << designation;
        cout << "\nPublications: " << publications << endl;
    }
};

// Derived class 2: Non-Teaching staff
class NonTeaching : public Staff {
    string department;
    int workingHours;
public:
    void getData() {
        cout << "\n--- Enter Non-Teaching Staff Details ---\n";
        getStaffData();
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Working Hours per Day: ";
        cin >> workingHours;
    }

    void display() {
        cout << "\n--- Non-Teaching Staff Details ---";
        displayStaffData();
        cout << "\nDepartment: " << department;
        cout << "\nWorking Hours: " << workingHours << endl;
    }
};

// Derived class 3: Administrative staff
class Administrative : public Staff {
    string role;
    int officeNo;
public:
    void getData() {
        cout << "\n--- Enter Administrative Staff Details ---\n";
        getStaffData();
        cout << "Enter Role: ";
        cin >> role;
        cout << "Enter Office Number: ";
        cin >> officeNo;
    }

    void display() {
        cout << "\n--- Administrative Staff Details ---";
        displayStaffData();
        cout << "\nRole: " << role;
        cout << "\nOffice No: " << officeNo << endl;
    }
};

// Main Function
int main() {
    Teaching t;
    NonTeaching nt;
    Administrative ad;

    cout << "\n===== Educational Institution Staff Database =====\n";

    t.getData();
    nt.getData();
    ad.getData();

    cout << "\n===== Staff Details =====\n";
    t.display();
    nt.display();
    ad.display();

    return 0;
}
