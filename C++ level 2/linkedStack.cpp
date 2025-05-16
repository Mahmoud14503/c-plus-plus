#include <iostream>
using namespace std;

class linkedStack {     
private:
    struct Node {
        float data;
        Node* next;
    };
    Node* top;
public:
    linkedStack(): top(NULL)
    {}
    void push(float x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        return;
    }
    float pop() {
        float value = top->data;
        Node* delptr = top;
        top = top->next;
        delete delptr;
        return value;
    }
    float peek() {
        return top->data;
    }
    bool isEmpty() {
        return top == NULL;
    }
    int count() {
        int counter;
        for (Node* i = top; i != NULL; i = i->next)
            counter++;
        return counter;
    }
    bool isFound(float item) {
        for (Node* i = top; i != NULL; i = i->next)
            if (item == i->data)
                return true;
        return false;
    }
    bool isFull() {
        // the only way to be true if all the heap is full, so you can't add new nodes
        Node* ptr = new Node;
        if (ptr == NULL)
            return true;
        return false;
    }
    void display() {
        for (Node* i = top; i != NULL; i = i->next)
            cout << i->data << '\t';
        cout << endl;
    }
};

int main() {
    linkedStack s;
    s.push(50);
    s.push(90);
    s.push(90);
    s.push(90);
    s.push(50);
    float fas = s.pop();
    s.display();
    cout << "faewafadvfa" << fas << "\n";
    s.pop();
    s.pop();
    s.display();
    s.pop();
    s.pop();
    cout << s.isFound(50);
}