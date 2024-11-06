//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 1
#include "Order.h"
using namespace std;

Order::Order(string item, string customerName) : item(item), customerName(customerName) {}  // Constructor

string Order::getItem() const {
    return item;  // Return food item
}

string Order::getCustomerName() const {
    return customerName;  // Return customer name
}