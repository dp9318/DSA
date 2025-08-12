#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    printf("Please enter two numbers:\n ");
    int num1,num2;
    scanf("%i %i", &num1, &num2);
    printf("The two numbers you have entered are: %i and %i.", num1, num2);
    return 0;
}