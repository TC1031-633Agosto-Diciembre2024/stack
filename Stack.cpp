//
// Created by Andrés Torres on 24/09/24.
//
#include "Stack.h"
#include "Node.h"
#include <iostream>
using namespace  std;

void Stack::push(int value) {
    Node* newNode= new Node(value);
    newNode->setNext(top);
    top=newNode;
}

int Stack::peek() {
    if(!isEmpty()) {
        return top->getData();
    }else {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}

int Stack::pop() {
    if(isEmpty()) {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    int value = top->getData();
    Node* temp= top;
    top=top->getNext();
    delete temp;
    return value;
}

bool Stack::isEmpty() {
    return top==nullptr;
}

void Stack::display() {
    cout<<"--TOP--"<<endl;
    Node* temp=top;
    while(temp!=nullptr) {
        cout<<temp->getData()<<endl;
        cout<<"-------"<<endl;
        temp=temp->getNext();
    }
    cout<<"--BOT---"<<endl;
}



