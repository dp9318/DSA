#include <stdio.h>
#include <string.h>

// wap to ask the user to input the names and print the most frequent names

int main(){
    int n = 10;
    char str[20][10];
    printf("Enter the names of 10 students: ");

    for(int i=0; i<n; i++){
        gets(str[i]);
    }
    for(int i=0; i<n; i++){
        printf("%s ", str[i]);
    }
    


    return 0;
}