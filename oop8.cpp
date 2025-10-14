#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swapping
        T temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Choose data type:\n1. Integer\n2. Float\n3. Exit\nEnter choice: ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: {
            int arr[n];
            cout << "Enter " << n << " integer elements:\n";
            for (int i = 0; i < n; ++i)
                cin >> arr[i];

            sortArray(arr, n);
            cout << "Sorted array: ";
            displayArray(arr, n);
            break;
        }
        case 2: {
            float arr[n];
            cout << "Enter " << n << " float elements:\n";
            for (int i = 0; i < n; ++i)
                cin >> arr[i];

            sortArray(arr, n);
            cout << "Sorted array: ";
            displayArray(arr, n);
            break;
        }
        case 3: {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}

