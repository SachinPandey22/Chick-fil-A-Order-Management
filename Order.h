//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 1

#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
public:
    Order(std::string item, std::string customerName);//Constructor
    std::string getItem() const;
    std::string getCustomerName() const;
private:
    std::string item;
    std::string customerName;
};

#endif