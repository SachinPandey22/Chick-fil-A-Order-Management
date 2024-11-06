//Sachin Pandey
//CS 3358 - 251 Fall 2024
//Assignment 1
#include "OrderQueue.h"
using namespace std;

// Places a new order in the queue and displays a confirmation message.
void OrderQueue::placeOrder(const Order& order) {
    queue.push(order);
    cout << "Order placed: " << order.getItem() << " for " << order.getCustomerName() << endl;
}

// Prepares the next order in the queue and displays the order being prepared.
// If the queue is empty, it notifies that there are no orders to prepare.
void OrderQueue::prepareOrder() {
    if (queue.empty()) {
        cout << "No orders to prepare." << endl;
    } else {
        Order order = queue.front();
        cout << "Order being prepared: " << order.getItem() << " for " << order.getCustomerName() << endl;
    }
}

// Serves the next order in the queue, removing it from the queue.
// If the queue is empty, it notifies that there are no orders ready to serve.
void OrderQueue::serveOrder() {
    if (queue.empty()) {
        cout << "No orders ready to serve." << endl;
    } else {
        Order order = queue.front();
        queue.pop();
        cout << "Order served: " << order.getItem() << " for " << order.getCustomerName() << endl;
    }
}

// Displays all pending orders in the queue.
// If the queue is empty, it notifies that there are no pending orders.
void OrderQueue::displayQueue() const {
    if (queue.empty()) {
        std::cout << "No pending orders." << std::endl;
    } else {
        std::queue<Order> tempQueue = queue;
        std::cout << "Current orders in queue:" << std::endl;
        while (!tempQueue.empty()) {
            Order order = tempQueue.front();
            std::cout << order.getItem() << " for " << order.getCustomerName() << std::endl;
            tempQueue.pop();
        }
    }
}
