#include <stdio.h>
#include <stdlib.h>

struct employee{
    int id;
    char name[20];
    float salary;
};

int main(){

    FILE *fptr;
    struct employee *p;
    int n;
    printf("Enter the number of employees you want to enter: ");
    scanf("%d", &n);
    p = (struct employee*)malloc(n*sizeof(struct employee));
    if(p==NULL){
        printf("Memory allocation failed!");
        return 0;
    }


    int i=0;
    int choice;
    int entry = 1;
    while(entry){
        printf("1. Enter new eployee \n2. exit");
        printf("ENter the choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                p=(struct employee*)malloc(sizeof(struct employee));
                printf("Enter id name salary : ");
                scanf("%d %s %f ", &(p+i)->id, (p+i)->name, &(p+i)->salary);
                i++;
                break;

            case 2:
                entry=0;
                break;
            default:
                printf("ENter valid option!\n");
        }
    }


    return 0;
}