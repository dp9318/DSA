#include <iostream>
using namespace std;

#define MAX 5

class CircularQueue {
    int arr[MAX];
    int front, rear;

public:
    CircularQueue() { front = rear = -1; }

    void enqueue(int x) {
        if((front == 0 && rear == MAX-1) || (rear+1)%MAX == front){
            cout << "Queue Overflow\n";
            return;
        }
        if(front == -1) front = rear = 0;
        else rear = (rear + 1) % MAX;
        arr[rear] = x;
        display();
    }

    void dequeue() {
        if(front == -1) { cout << "Queue Underflow\n"; return; }
        cout << "Deleted: " << arr[front] << endl;
        if(front == rear) front = rear = -1; // Queue becomes empty
        else front = (front + 1) % MAX;
        display();
    }

    void display() {
        if(front == -1) { cout << "Queue is empty\n"; return; }
        cout << "Current queue: ";
        int i = front;
        while(true){
            cout << arr[i] << " ";
            if(i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50); // Overflow here

    q.dequeue();
    q.dequeue();

    q.enqueue(60);
    q.enqueue(70); // Wraps around
}
