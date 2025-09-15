#include <stdio.h>
int main(){

    int range;
    printf("Give a number: ");
    scanf("%d",&range);
    printf("\nOutput: ");
    for(int i=2; i<range; i++){
        if(i%2==0){
            if(i*i<=range){
                printf("%d ",i*i);
            }
            else{
                break;
            }
        }
    }
    return 0;
}