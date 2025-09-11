#include <stdio.h>
#include <stdlib.h>

struct node {
    int ScholarNo;
    int marks;
    struct node *next;
};

int main() {
    struct node *first, *second, *third;

    // manually creating nodes
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // filling data
    first->ScholarNo = 1; first->marks = 90; first->next = second;
    second->ScholarNo = 2; second->marks = 85; second->next = third;
    third->ScholarNo = 3; third->marks = 95; third->next = NULL;

    // traversing manually with while loop(for situations when we dont know number of nodes)
    struct node *curr = first;
    while (curr != NULL) {
        printf("ScholarNo: %d, Marks: %d\n", curr->ScholarNo, curr->marks);
        curr = curr->next;
    }

    return 0;
}
