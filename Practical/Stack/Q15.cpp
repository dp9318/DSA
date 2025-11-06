#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    void push(int x) {
        if(top >= MAX-1) cout << "Stack Overflow\n";
        else arr[++top] = x;
    }

    void pop() {
        if(top < 0) cout << "Stack Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        if(top < 0) cout << "Stack is empty\n";
        else {
            cout << "Stack elements: ";
            for(int i=0; i<=top; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
}
