#include <stdio.h>
#include <stdlib.h>

struct node {
    int SchNo;
    int marks;
    struct node *next;
};

struct node *first = NULL, *last = NULL;

void insertNode(int SchNo, int marks) {
    struct node *curr = (struct node*)malloc(sizeof(struct node));
    curr->SchNo = SchNo;
    curr->marks = marks;
    curr->next = NULL;

    if (first == NULL) { 
        first = curr;
        last = curr;
        curr->next = first;
    } else {
        last->next = curr;
        curr->next = first;
        last = curr;
    }
}

void deleteNode(int SchNo) {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *curr = first, *prev = last;
    do {
        if (curr->SchNo == SchNo) {
            if (curr == first && curr == last) { 
                free(curr);
                first = last = NULL;
            } else if (curr == first) { 
                first = first->next;
                last->next = first;
                free(curr);
            } else if (curr == last) { 
                prev->next = first;
                last = prev;
                free(curr);
            } else { 
                prev->next = curr->next;
                free(curr);
            }
            printf("Deleted node with ScholarNo %d\n", SchNo);
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != first);

    printf("ScholarNo %d not found!\n", SchNo);
}

void displayList() {
    if (first == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node *curr = first;
    printf("\nCircular Linked List:\n");
    do {
        printf("ScholarNo: %d, Marks: %d\n", curr->SchNo, curr->marks);
        curr = curr->next;
    } while (curr != first);
}

int main() {
    int choice=-1, SchNo, marks;

    do {
        printf("\n--- Circular Linked List Menu ---\n");
        printf("0. Exit\n");
        printf("1. Insert Node\n");
        printf("2. Delete Node\n");
        printf("3. Display List\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 0:
                printf("Exiting program.\n");
                break;
            case 1:
                printf("Enter ScholarNo and Marks: ");
                scanf("%d %d", &SchNo, &marks);
                insertNode(SchNo, marks);
                break;
            case 2:
                printf("Enter ScholarNo to delete: ");
                scanf("%d", &SchNo);
                deleteNode(SchNo);
                break;
            case 3:
                displayList();
                break;
            default:
                printf("Invalid choice! Try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
