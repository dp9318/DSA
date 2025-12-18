#include <stdio.h>
#include <stdlib.h>

// creating structure

struct student{
    int roll;
    char name[20];
    float marks;
};



int main(){

    // initializing pointers and structure array
    FILE *fptr;
    struct student s[5];
    struct student *p = s; 

    // opening file
    fptr = fopen("student.txt","w");
    if(fptr==NULL){
        printf("Unable to create file!");
        return 0;
    }

    // taking input from the user and writing it to the file
    printf("Enter the details of student(roll, name, marks)\n");
    for(int i=0; i<5; i++){
        printf("roll name marks : ");

        //input from the user
        scanf("%d %s %f", &(p+i)->roll, (p+i)->name, &(p+i)->marks);
        // writing into the file
        fprintf(fptr, "%d %s %.2f", (p+i)->roll, (p+i)->name, (p+i)->marks);
    }

    fclose(fptr); // closed the file


    //opening file to read and print
    fptr = fopen("student.txt","r");
    printf("Data in file:\n");
    // storing the data of the file into the pointer fptr
    for(int i=0; i<5; i++){
        fscanf(fptr, "%d %s %f ", &(p+i)->roll, (p+i)->name, &(p+i)->marks);
    }

    fclose(fptr);
    
    // prinitng the stored data 
    for(int i=0; i<5; i++){
        printf("Roll: %d \nName: %s \nMarks: %.2f\n\n", (p+i)->roll, (p+i)->name, (p+i)->marks);
    }

    return 0;
}