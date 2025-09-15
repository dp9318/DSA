#include <stdio.h>

int main() {

    int h,m;
    while(1){
        printf("Enter 24-hour format(hh : mm) time: ");
        scanf("%d : %d", &h,&m);
        if(h>23 || h<0 || m>59 || m<0){
            printf("Invalid time, enter again.\n");
        }
        else{
            break;
        }
    }
    
    if(h>12){
        printf("Equivalent 12-hour time: %d : %d pm", h-12,m);
        
    }
    else{
        printf("Equivalent 12-hour time: %d : %d am", h,m);
    }
    
    return 0;
}