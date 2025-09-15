#include <iostream>
using namespace std;
struct node
{
    int ScholarNo;
    int marks;
    struct node *next;
};
node *first = NULL;
void insertNode(int ScholarNo, int marks)
{
    node *newNode = new node();
    newNode->ScholarNo = ScholarNo;
    newNode->marks = marks;
    if (first == NULL)
    {
        first = newNode;
        newNode->next = first;
    }
    else
    {
        node *temp = first;
        while (temp->next != first)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = first;
    }
}
void deleteNode(int ScholarNo)
{
    if (first == NULL)
        return;
    node *curr = first;
    node *prev = NULL;
    do
    {
        if (curr->ScholarNo == ScholarNo)
        {
            if (curr == first)
            {
                node *temp = first;
                while (temp->next != first)
                    temp = temp->next;
                if (first->next == first)
                {
                    delete first;
                    first = NULL;
                    return;
                }
                temp->next = first->next;
                node *del = first;
                first = first->next;
                delete del;
            }
            else
            {
                prev->next = curr->next;
                delete curr;
            }
            return;
        }
        else
        {
            cout << "Data not found! Enter existing Scholar number."<<endl;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != first);
}
void display()
{
    if (first == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    node *temp = first;
    do
    {
        cout << temp->ScholarNo << " " << temp->marks << endl;
        temp = temp->next;
    } while (temp != first);
}
int main()
{
    int choice = -1, ScholarNo, marks;
    while (choice != 4)
    {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter ScholarNo and Marks: ";
            cin >> ScholarNo >> marks;
            insertNode(ScholarNo, marks);
            break;
        case 2:
            cout << "Enter ScholarNo to delete: ";
            cin >> ScholarNo;
            deleteNode(ScholarNo);
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting...!";
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }
}
