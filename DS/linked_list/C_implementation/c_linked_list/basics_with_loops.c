#include <stdio.h>
#include <stdlib.h>

struct node {
    int SchNo;
    int marks;
    struct node *next;
};

int main() {
    struct node *first = NULL, *curr = NULL, *prev = NULL;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        curr = (struct node*)malloc(sizeof(struct node));
        printf("Enter ScholarNo and Marks for student %d: ", i+1);
        scanf("%d %d", &curr->SchNo, &curr->marks);
        curr->next = NULL;

        if (first == NULL) {
            first = curr;   // first node
        } else {
            prev->next = curr;  // link previous node
        }
        prev = curr;  // update prev
    }

    curr = first;
    printf("\nLinked List:\n");
    while (curr != NULL) {
        printf("ScholarNo: %d, Marks: %d\n", curr->SchNo, curr->marks);
        curr = curr->next;
    }

    return 0;
}
