#include <iostream>
#include <string>
using namespace std;

class bank {
    string name, atype;
    int ano;
    int bal;
public:
    // Constructor
    bank(int no, string n, string t, int b) {
        ano = no;
        name = n;
        atype = t;
        bal = b;
    }

    // Default constructor
    bank() {
        ano = 0;
        name = "";
        atype = "";
        bal = 0;
    }

    // Get account info
    void getinfo() {
        cout << "Enter Account no.: ";
        cin >> ano;
        cout << "Enter account type: ";
        cin >> atype;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter balance amount: ";
        cin >> bal;
    }

    // Deposit money
    void deposit() {
        int amt;
        cout << "Initial balance is: " << bal << endl;
        cout << "Enter the amount to deposit: ";
        cin >> amt;
        bal = bal + amt;
        cout << "New balance is: " << bal << endl;
    }

    // Withdraw money
    void withdraw() {
        int amt;
        cout << "Initial balance is: " << bal << endl;
        cout << "Enter the amount to withdraw: ";
        cin >> amt;
        if (amt > bal) {
            cout << "Insufficient balance!" << endl;
        } else {
            bal = bal - amt;
            cout << "New balance is: " << bal << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\nAccount No.: " << ano
             << "\nName: " << name
             << "\nAccount Type: " << atype
             << "\nBalance: " << bal << endl;
    }
};

// Main function
int main() {
    bank b1;
    b1.getinfo();

    int choice;
    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            b1.deposit();
            break;
        case 2:
            b1.withdraw();
            break;
        case 3:
            b1.display();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
