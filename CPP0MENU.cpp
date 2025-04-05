#include <iostream>
#include <cstdlib> // For system() function

using namespace std;

void displayMenu() {
    cout << "==============================" << endl;
    cout << "C++ Tutorial - Menu" << endl;
    cout << "==============================" << endl;
    cout << "1. CPP001_First_Program - Hello World" << endl;
    cout << "2. CPP002_Variables - Variables and Memory" << endl;
    cout << "3. CPP004_Input - Console Input/Output" << endl;
    cout << "4. PR5 - Arithmetic Operations" << endl;
    cout << "0. Exit" << endl;
    cout << "==============================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                system("./CPP001_First_Program"); // Run the executable for CPP001_First_Program
                break;
            case 2:
                system("./CPP002_Variables"); // Run the executable for CPP002_Variables
                break;
            case 3:
                system("./CPP004_Input"); // Run the executable for CPP004_Input
                break;
            case 4:
                system("./PR5"); // Run the executable for PR5
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}