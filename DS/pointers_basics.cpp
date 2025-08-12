#include <iostream>
using namespace std;

int main(){
    //defining an array of size 4
    int array[4]={1,2,3,4};

    //assigning a pointer to the array
    int *ptr = array;

    for(int i=0; i<4; i++){
        //prinitng the array using pointers
        cout<<*ptr+i<<" "<<"= ";

        //printing the physical address of the elements of the array.
        cout<<&array[i]<<endl;

        //another way to print the physical address of the elements of the array.
        cout<<ptr+i<<" =";
    }

    return 0;
}