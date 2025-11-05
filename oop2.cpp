#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int emp_id;
    string department;
    string date_of_joining;
    string address;
    string telephone;
    static int employeeCount;

public:
    // Default Constructor
    Employee() {
        name = "Unknown";
        emp_id = 0;
        department = "Not Assigned";
        date_of_joining = "Not Set";
        address = "Not Provided";
        telephone = "000-0000";
        employeeCount++;
        cout << "Default constructor called for employee ID: " << emp_id << endl;
    }

    // Parameterized Constructor
    Employee(string n, int id, string dept, string doj, string addr, string tel) {
        name = n;
        emp_id = id;
        department = dept;
        date_of_joining = doj;
        address = addr;
        telephone = tel;
        employeeCount++;
        cout << "Parameterized constructor called for: " << name << endl;
    }

    // Copy Constructor
    Employee(const Employee &e) {
        name = e.name + " (Copy)";
        emp_id = e.emp_id + 1000;
        department = e.department;
        date_of_joining = e.date_of_joining;
        address = e.address;
        telephone = e.telephone;
        employeeCount++;
        cout << "Copy constructor called for: " << name << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for employee: " << name << " (ID: " << emp_id << ")" << endl;
        employeeCount--;
    }

    // Member function to accept employee details
    void acceptDetails() {
        cout << "\n--- Enter Employee Details ---" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Employee ID: ";
        cin >> emp_id;
        cout << "Department: ";
        cin >> department;
        cout << "Date of Joining (DD-MM-YYYY): ";
        cin >> date_of_joining;
        cout << "Address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Telephone Number: ";
        getline(cin, telephone);
    }

    // Member function to display employee details
    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << department << endl;
        cout << "Date of Joining: " << date_of_joining << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone: " << telephone << endl;
        cout << "------------------------" << endl;
    }

    // Inline function to get employee name
    inline string getName() {
        return name;
    }

    // Inline function to get employee ID
    inline int getEmpId() {
        return emp_id;
    }

    // Inline function to get department
    inline string getDepartment() {
        return department;
    }

    // Static function to show total employees
    static void showTotalEmployees() {
        cout << "\nTotal Employees in Database: " << employeeCount << endl;
    }
};

// Initialize static member
int Employee::employeeCount = 0;

int main() {
    cout << "=== EMPLOYEE INFORMATION SYSTEM ===" << endl;
    
    // Employee 1 - Default constructor
    cout << "\n--- Creating Employee 1 (Default Constructor) ---" << endl;
    Employee emp1;
    emp1.displayDetails();

    // Employee 2 - User input for parameterized constructor
    cout << "\n--- Creating Employee 2 (Parameterized Constructor) ---" << endl;
    string name, dept, doj, addr, tel;
    int id;
    
    cout << "Enter details for Employee 2:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Employee ID: ";
    cin >> id;
    cout << "Department: ";
    cin >> dept;
    cout << "Date of Joining (DD-MM-YYYY): ";
    cin >> doj;
    cout << "Address: ";
    cin.ignore();
    getline(cin, addr);
    cout << "Telephone: ";
    getline(cin, tel);
    
    Employee emp2(name, id, dept, doj, addr, tel);
    emp2.displayDetails();

    // Employee 3 - Copy constructor
    cout << "\n--- Creating Employee 3 (Copy Constructor from Employee 2) ---" << endl;
    Employee emp3 = emp2;
    emp3.displayDetails();

    // Employee 4 - Dynamic allocation with user input
    cout << "\n--- Creating Employee 4 (Dynamic Allocation) ---" << endl;
    Employee *emp4 = new Employee();
    cout << "Enter details for Employee 4:" << endl;
    emp4->acceptDetails();
    emp4->displayDetails();

    // Employee 5 - Another dynamic allocation
    cout << "\n--- Creating Employee 5 (Dynamic Allocation) ---" << endl;
    Employee *emp5 = new Employee();
    cout << "Enter details for Employee 5:" << endl;
    emp5->acceptDetails();
    emp5->displayDetails();

    // Using inline functions
    cout << "\n--- Using Inline Functions ---" << endl;
    cout << "Employee 2 Name: " << emp2.getName() << endl;
    cout << "Employee 2 ID: " << emp2.getEmpId() << endl;
    cout << "Employee 2 Department: " << emp2.getDepartment() << endl;

    // Show total employees
    Employee::showTotalEmployees();

    // Delete dynamic objects
    cout << "\n--- Deleting Dynamic Employees ---" << endl;
    delete emp4;
    delete emp5;

    // Final count
    cout << "\n--- Final Employee Count ---" << endl;
    Employee::showTotalEmployees();

    cout << "\n=== Program Ending ===" << endl;
    return 0;
}
