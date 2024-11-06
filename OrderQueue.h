//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 1
#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H

#include "Order.h"
#include <queue>
#include <iostream>

class OrderQueue {
public:
    void placeOrder(const Order& order);
    void prepareOrder();
    void serveOrder();
    void displayQueue() const;
private:
    std::queue<Order> queue;
};

#endif
