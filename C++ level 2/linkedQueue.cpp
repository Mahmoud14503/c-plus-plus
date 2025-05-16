#include <iostream>
using namespace std;

class Node {
    float data;
    Node* next;
public:
    Node(): data(0), next(NULL) 
    {}
    friend class linkedQueue;
};
class linkedQueue {
    Node* front;
    Node* rear;
public:
    linkedQueue(): front(NULL), rear(NULL) 
    {}
    void enquque(float x) {
        Node* newNode = new Node;
        newNode->data = x;
        if (isEmpty())
            front = rear = newNode;
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    float dequeue() {
        if (isEmpty())
            cout << "The queue is empty, no items to delete";
        else if (front == rear)
        {
            float value = front->data;
            delete front;
            front  = rear = NULL;
            return value;
        }
        else
        {
            float value = front->data;
            Node* delptr = front;
            front = front->next;
            delete delptr;
            return value;
        }
        
    }
    float getFront(){
        return front->data;
    }
    float getRear(){
        return rear->data;
    }
    bool isEmpty() {
        return front == NULL;
    }
    bool isFound(float item) {
        for (Node* i = front; i != NULL; i = i->next)
            if (item == i->data)
                return true;
        return false;
    }
    void display() {
        if (isEmpty())
            cout << "Queue is empty, no items to display";
        for (Node* i = front; i != NULL; i = i->next)
            cout << i->data << '\t';
        cout << endl;
    }
    void clear() {
        while (!isEmpty())
        {
            dequeue();
        }
    }
};

int main() {
    linkedQueue s;
    s.enquque(0.6);
    s.display();
    s.enquque(7.5);
    s.clear();
    s.display();
}