#include <iostream>
using namespace std;
const int stackMaxSize = 100;

class Stack {
private:
    int stackArray[stackMaxSize];
    int top;
public:
    Stack(): top(-1)
    {}
    void push(int x) {
        if(top >= stackMaxSize){
            cout << "YOU CAN'T PUSH, THE STACK IS FULL\n";
            return;
        }
        top++;
        stackArray[top] = x;
    }
    void pop() {
        if(isEmpty()) {
            cout <<"THE STACK IS EMPTY\n"; 
            return;
        }
        top--;
    }
    void pop(int &saveElement) {
        if(isEmpty()) {
            cout <<"THE STACK IS EMPTY\n"; 
            return;
        }
        saveElement = stackArray[top];
        top--;
    }
    bool isEmpty() {
        return top < 0;
    }
    int getTop() {
        if(isEmpty()) {
            cout <<"THE STACK IS EMPTY\n"; 
            return -12345;
        }
        return stackArray[top];
    }
    void printFromBottom() {
        cout << "[";
        for (int i = 0; i < top + 1; i++)
            cout << stackArray[i] << endl;
        cout << "]";
    }
    void printFromTop() {
        cout << "[";
        for (int i = top; i >= 0; i--)
            cout << stackArray[i] << endl;
        cout << "]";
    }


};

int main() {
    Stack ov;
    ov.push(9);
    ov.push(5);
    ov.push(4);
    ov.push(7);
    ov.push(8646);
    ov.push(5);
    ov.push(58);
    ov.push(59);
    // cout << ov.getTop() << endl;
    ov.printFromBottom();
    ov.printFromTop();
    // cout << ov.getTop() << endl;
}