#include <stdio.h>
int main(){

    int num;
    printf("Enter a number not more than 3 digits: ");
    scanf("%d",&num);

    if(num<1000){
        int count=0, new_num=num;
        while(new_num>0){
            new_num /=10;
            count++;
        }
        printf("Number of digits: %d", count);
    }
    else{
        printf("You have entered more than 3 digits.");
    }

    return 0;
}