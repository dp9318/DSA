#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
    char arr[10];
    for(int i=0; i<n; i++){
        scanf("%c",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%c",arr[i]);
    }
    return 0;
}
