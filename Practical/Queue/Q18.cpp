#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() { front = -1; rear = -1; }

    void enqueue(int x) {
        if(rear >= MAX-1) { cout << "Queue Overflow\n"; return; }
        if(front == -1) front = 0;
        arr[++rear] = x;
        display();
    }

    void dequeue() {
        if(front == -1 || front > rear) { cout << "Queue Underflow\n"; return; }
        cout << "Deleted: " << arr[front++] << endl;
        if(front > rear) front = rear = -1; // reset when empty
        display();
    }

    void display() {
        if(front == -1) { cout << "Queue is empty\n"; return; }
        cout << "Current queue: ";
        for(int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();

    q.enqueue(40);
    q.enqueue(50);
}
