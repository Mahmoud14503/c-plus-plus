#include <iostream>
using namespace std;
#include <cassert>
class Node {
    float data;
    Node* next;
public:
    friend class LinkedList;
};

class LinkedList {
    Node* head;
    int length;
public:
    LinkedList(): head(NULL), length(0)
    {}
    void pushAsFirst(float x) {
        Node* newNode = new Node;
        newNode->data = x;
        if (isEmpty()) {
        newNode->next = NULL;
        head = newNode;
        length++;
        return;
        }
        newNode->next = head;
        head = newNode;
        length++;
    }
    void pushBeforeIteam(float newItem, float itemToPushBefore) {
        Node* newNode = new Node;
        newNode->data = newItem;
        if (isEmpty()) {
        newNode->next = NULL;
        head = newNode;
        length++;
        return;
        }
        if (!isFound(itemToPushBefore)) {
            cout << "Iteam is not found";
            return;
        }
        // to find the node of the itemToPushBefore
        for (Node* i = head; i != NULL; i = i->next)
        {
            if (itemToPushBefore == i->next->data)
            {
                newNode->next = i->next;
                i->next = newNode;
                length++;
                return;
            }
            
        }
        
    }
    void pushAtIndex(float newItem, int index) {
        assert(!(index < 0 || index >= length));
            Node* newNode = new Node;
            newNode->data = newItem;
            Node* cur = head;
            if (index == 0)
            {
                pushAsFirst(newItem);
                return;
            }
            // the loop is to find the index we want to push in
            cur = cur->next; // the cur have to precede the i by one node
            for (int i = 0; i < index; i++);
            newNode->next = cur->next;
            cur->next = newNode;
            length++;
        }
    void updateAtIndex(float newItem, int index) {
        assert(!(index < 0 || index > length));
        if (isEmpty())
        {
            cout <<  "The list is empty, no iteams to update\n";
            return;
        }
        if (index == 0)
        {
            head->data = newItem;
            return;
        }
        Node* cur = head;
        cur = cur->next; // the cur have to precede the i by one node
        for (size_t i = 0; i < index; i++);
        cur->data = newItem;
    }
    void append(float x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
        if (isEmpty()) {
        head = newNode;
        length++;
        return;
        }
        // to find the last node
        for (Node* i = head; /*i->next != NULL*/; i = i->next)
        {
            if (i->next == NULL)
            {
                i->next = newNode;
                length++;
                break;
            }
            
        }
        
    }
    void deleteIteam(float x) {
        if (isEmpty())
        {
            cout <<  "The list is empty, no iteams to delete\n";
            return;
        }
        if (x == head->data)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            length--;
            return;
        }
        Node* prev;
        Node* temp;
        // to find the iteam we want to delete and its prevoius
        for (prev = NULL, temp = head; temp->data != x; prev = temp, temp = temp->next);
        // to remove it from the list and delete it from the memory
        prev->next = temp->next;
        delete temp;
        length--;
    }
    bool isEmpty() {
        return head == NULL;
    }
    void display() {
        for (Node* temp = head; temp != NULL; temp = temp->next)
            cout << temp->data << '\n';
    }
    int count() {
        int counter = 0;
        for (Node* temp = head; temp != NULL; temp = temp->next)
            counter++;
        return counter;
    }
    bool isFound(float x) {
        for (Node* i = head; i != NULL; i = i->next)
        {
            if (i->data == x)
                return true;
        }
        return false;
    }
    int getLength() {
        return length;
    }
};

int main() {
    LinkedList s;
    s.append(5);
    s.append(5);
    s.append(5);
    s.pushAtIndex(6, 2);
    s.updateAtIndex(8, 2);
    s.display();
    cout << '\n' << s.getLength();
}