#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int emp_id;
    string department;
    static int employeeCount; // Static variable shared by all objects

public:
    // Default constructor
    Employee() {
        name = "Unknown";
        emp_id = 0;
        department = "Not Assigned";
        employeeCount++;
    }

    // Parameterized constructor
    Employee(string n, int id, string dept) {
        name = n;
        emp_id = id;
        department = dept;
        employeeCount++;
    }

    // Copy constructor
    Employee(const Employee &e) {
        name = e.name + " (Copy)";
        emp_id = e.emp_id + 1000;
        department = e.department;
        employeeCount++;
    }

    // Destructor
    ~Employee() {
        cout << "Destructor called for: " << name << endl;
        employeeCount--;
    }

    // Function to accept employee details
    void acceptDetails() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Department: ";
        cin >> department;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Department: " << department << endl;
        cout << "------------------------" << endl;
    }

    // Inline functions
    inline string getName() { return name; }
    inline int getId() { return emp_id; }
    inline string getDept() { return department; }

    // Static function to show total employees
    static void showTotal() {
        cout << "\nTotal Employees: " << employeeCount << endl;
    }
};

// Initialize static variable
int Employee::employeeCount = 0;

int main() {
    cout << "=== Employee Information System ===" << endl;

    // Default constructor
    Employee e1;
    e1.displayDetails();

    // Parameterized constructor
    Employee e2("Rahul", 101, "HR");
    e2.displayDetails();

    // Copy constructor
    Employee e3 = e2;
    e3.displayDetails();

    // Dynamic object
    Employee *e4 = new Employee();
    e4->acceptDetails();
    e4->displayDetails();

    // Using inline functions
    cout << "\nEmployee 2 Name: " << e2.getName();
    cout << "\nEmployee 2 ID: " << e2.getId();
    cout << "\nEmployee 2 Dept: " << e2.getDept() << endl;

    // Show total employees
    Employee::showTotal();

    // Delete dynamic object
    delete e4;

    // Final count
    Employee::showTotal();

    cout << "\n=== Program Ends ===" << endl;
    return 0;
}
