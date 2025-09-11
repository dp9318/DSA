#include <iostream>
using namespace std;

class CircularQueue {

private:
    int front;
    int rear;
    int *arr;
    int size;

public:
    CircularQueue(int N) {
        size = N;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0; // first element
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = x;
        cout << x << " is entered into queue!" << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue!" << endl;
            return;
        }
        cout << arr[front] << " is removed from queue!" << endl;
        if (front == rear) {
            // only one element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    void Front() {
        if (isEmpty()) {
            cout << "Queue is empty, no elements at front!" << endl;
            return;
        }
        cout << arr[front] << " is at the front!" << endl;
    }

    void Rear() {
        if (isEmpty()) {
            cout << "Queue is empty, no elements at rear!" << endl;
            return;
        }
        cout << arr[rear] << " is at the rear!" << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "No element in the queue...!" << endl;
            return;
        }
        cout << "Elements of queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~CircularQueue() {
        delete[] arr;
    }
};