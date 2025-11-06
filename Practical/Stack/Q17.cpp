#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    string arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(string book) {
        if(top >= MAX-1) { cout << "Stack Overflow\n"; return; }
        arr[++top] = book;
        display();
    }

    void pop() {
        if(top < 0) { cout << "Stack Underflow\n"; return; }
        cout << "Removing: " << arr[top--] << endl;
        display();
    }

    void display() {
        if(top < 0) { cout << "Stack is empty\n"; return; }
        cout << "Current stack: ";
        for(int i=top; i>=0; i--) cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack books;

    // Push books
    books.push("Book A");
    books.push("Book B");
    books.push("Book C");

    // Pop a book
    books.pop();
    books.pop();

    // Push another book
    books.push("Book D");
}
