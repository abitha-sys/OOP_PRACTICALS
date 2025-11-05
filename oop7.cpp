#include <iostream>
#include <fstream>   // for file handling
using namespace std;

// Define Inventory class
class Inventory {
    int itemCode;
    char itemName[30];
    float itemPrice;

public:
    // Function to input item details
    void getData() {
        cout << "\nEnter item code: ";
        cin >> itemCode;
        cout << "Enter item name: ";
        cin.ignore();           // clear input buffer
        cin.getline(itemName, 30);
        cout << "Enter item price: ";
        cin >> itemPrice;
    }

    // Function to display item details
    void showData() {
        cout << "\nItem Code: " << itemCode;
        cout << "\nItem Name: " << itemName;
        cout << "\nItem Price: " << itemPrice;
        cout << "\n---------------------------";
    }

    // Function to write data to file
    void writeToFile() {
        ofstream fout;
        fout.open("inventory.txt", ios::app); // open file in append mode
        getData();  // take input from user
        fout << itemCode << " " << itemName << " " << itemPrice << endl;
        fout.close();
        cout << "\nRecord written to file successfully!";
    }

    // Function to read data from file
    void readFromFile() {
        ifstream fin;
        fin.open("inventory.txt");
        if (!fin) {
            cout << "\nFile not found!";
            return;
        }

        cout << "\n--- Inventory Records ---";
        while (fin >> itemCode >> itemName >> itemPrice) {
            showData();
        }
        fin.close();
    }
};

// Main function
int main() {
    Inventory item;
    int choice;

    cout << "\n\n*** INVENTORY MENU ***";
    cout << "\n1. Add Item Record";
    cout << "\n2. Display All Records";
    cout << "\n3. Exit";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        item.writeToFile();
        break;
    case 2:
        item.readFromFile();
        break;
    case 3:
        cout << "\nExiting program...";
        break;
    default:
        cout << "\nInvalid choice!";
    }

    return 0;
}
