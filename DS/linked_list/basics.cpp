#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            cout << val << " inserted at the end!" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        cout << val << " inserted at the end!" << endl;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << val << " inserted at the beginning!" << endl;
    }

    void deleteValue(int val) {
        if (!head) {
            cout << "List is empty, cannot delete!" << endl;
            return;
        }
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            cout << val << " deleted from list!" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != val) {
            temp = temp->next;
        }
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            cout << val << " deleted from list!" << endl;
        } else {
            cout << val << " not found in the list!" << endl;
        }
    }

    void display() {
        if (!head) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Elements of Linked List: ";
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        Node* temp = head;
        while (temp) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main() {
    LinkedList list;
    int choice, ele;

    do {
        cout << "=== Singly Linked List ===" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Delete a value" << endl;
        cout << "4. Display all elements" << endl;
        cout << "0. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
        case 0:
            cout << "Exiting...!" << endl;
            break;

        case 1:
            cout << "Enter the element: ";
            cin >> ele;
            list.insertAtBeginning(ele);
            break;

        case 2:
            cout << "Enter the element: ";
            cin >> ele;
            list.insertAtEnd(ele);
            break;

        case 3:
            cout << "Enter the value to delete: ";
            cin >> ele;
            list.deleteValue(ele);
            break;

        case 4:
            list.display();
            break;

        default:
            cout << "Enter a valid choice!" << endl;
            break;
        }
        cout << endl;

    } while (choice != 0);

    return 0;
}
