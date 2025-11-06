#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
    Node* head;

public:
    LinkedList() { head = nullptr; }

    // Insert at end
    void insert(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = nullptr;
        if(head == nullptr) head = newNode;
        else {
            Node* temp = head;
            while(temp->next != nullptr) temp = temp->next;
            temp->next = newNode;
        }
        display();
    }

    // Delete first occurrence of a value
    void remove(int x) {
        if(head == nullptr) { cout << "List is empty\n"; return; }
        if(head->data == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            display();
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr && temp->next->data != x) temp = temp->next;
        if(temp->next == nullptr) { cout << x << " not found\n"; return; }
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        display();
    }

    void display() {
        if(head == nullptr) { cout << "List is empty\n"; return; }
        cout << "Current List: ";
        Node* temp = head;
        while(temp != nullptr) { cout << temp->data << " "; temp = temp->next; }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.remove(20);
    list.remove(40); // element not found

    list.insert(40);
}
