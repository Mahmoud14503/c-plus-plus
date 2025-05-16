#include <iostream>
using namespace std;
#include <cassert>

class circularQueue {
private:
    int front, rear, length, SIZE;
    float* queueArray;
public:
    circularQueue(): front(0), rear(SIZE - 1), length(0), SIZE(100), queueArray(new float[SIZE])
    {}
    circularQueue(int size): front(0), rear(SIZE - 1), length(0), SIZE(size), queueArray(new float[SIZE])
    {}
    bool isEmpty() {
        return length == 0;
    }
    bool isFull() {
        return length == SIZE;
    }
    void enqueue(float x) {
        if (isFull())
            cout << "The queue is full, can not enqueue" << '\n';
        else {
            rear = (rear + 1) % SIZE;
            queueArray[rear] = x;
            length++;
        }
        
    }
    void dequeue() {
        if (isEmpty())
            cout << "The queue is empty, nothing to dequeue" << '\n';
        else {
            front = (front + 1) % SIZE;
            length--;
        }
    }
    float getFront() {
        assert(!isEmpty());
            return queueArray[front];
    }
    float getRear() {
        assert(!isEmpty());
            return queueArray[rear];
    }
    void display() {
        if (isEmpty())
            return;
        for (int i = front; i != rear; i = (i + 1) % SIZE)
            cout << queueArray[i] << '\t';
        cout << queueArray[rear] << '\t';
    }
    int searchIndex(float x) {
        assert(!isEmpty());
        for (int i = front; i != rear; i = (i + 1) % SIZE)
            if (queueArray[i] == x)
                return i;
        if (queueArray[rear] == x)
            return rear;
        return -1;
        
    }
};

int main()
{
    circularQueue s(12);
    s.enqueue(0.05);
    s.enqueue(0.06);
    s.enqueue(0.07);
    s.dequeue();
    s.enqueue(0.09);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.enqueue(0.0123);
    s.display();
}