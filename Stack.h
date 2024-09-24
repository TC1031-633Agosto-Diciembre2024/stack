//
// Created by Andrés Torres on 24/09/24.
//
#include "Node.h"
#ifndef STACK_H
#define STACK_H

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    ~Stack() {
        while(!isEmpty()) {
            pop();
        }
    }
    void push(int value);
    int pop();
    int peek();
    bool isEmpty();
    void display();

};

#endif //STACK_H
