//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 1

#include "Order.h"
#include "OrderQueue.h"
#include <iostream>
using namespace std;

int main() {
    OrderQueue chickfilaQueue;
    int choice;
    string item, customerName;

    while (true) {
        cout << "1. Place Order\n2. Prepare Order\n3. Serve Order\n4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            cin.ignore();  // Skip newline
            cout << "Enter food item: ";
            getline(cin, item);
            cout << "Enter customer name: ";
            getline(cin, customerName);
            chickfilaQueue.placeOrder(Order(item, customerName));  // Add new order
        } else if (choice == 2) {
            chickfilaQueue.prepareOrder();  // Prepare next order
        } else if (choice == 3) {
            chickfilaQueue.serveOrder();  // Serve next order
        } else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;  // Exit program
        } else {
            cout << "Invalid choice. Try again.\n";
        }

        chickfilaQueue.displayQueue();  // Show current queue status
    }

    return 0;
}
