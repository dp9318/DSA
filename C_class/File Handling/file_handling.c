#include <stdio.h>
#include <stdlib.h>

struct student{
    int roll;
    char name[20];
    float marks;

};


int main(){
    FILE *fptr;
    struct student s[5];
    struct student *p = s;

    fptr = fopen("student.dat","wb");
    if(fptr==NULL){
        printf("Can't open the file!\n");
        return 0;
    }

    printf("Enter the roll, name and roll\n");
    for(int i=0; i<5; i++){

        printf("format: roll name marks: ");
        scanf("%d %s %f", &(p+i)->roll, (p+i)->name, &(p+i)->marks );
    }
    fwrite(s, sizeof(struct student), 5, fptr);
    fclose(fptr);


    fptr = fopen("student.dat","rb");
    fread(s,sizeof(struct student), 5, fptr);

    fclose(fptr);

    for(int i=0; i<5; i++){
        printf("roll: %d \nname: %s \nmarks: %.2f\n\n", (p+i)->roll, (p+i)->name, (p+i)->marks);
    }

    return 0;
}