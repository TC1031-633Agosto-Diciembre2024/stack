#include <iostream>
#include "Stack.h"
int main() {
    Stack stack;
    stack.push(2);
    stack.push(10);
    stack.push(8);
    stack.push(20);
    stack.push(6);
    stack.display();
    std::cout<<"NO Sale el elemento: "<<stack.peek()<<std::endl;
    stack.display();

    return 0;
}
