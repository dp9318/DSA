#include <iostream>
using namespace std;

int main(){


    //initializing and assigning a value to a variable x
    int x = 10;

    //here we create a pointer and assigning the address of x in it
    int *ptr = &x;

    // here we create another pointer which stores the address of the pointer *ptr and **dptr is the double pointer
    int **dptr = &ptr;


    //here we simply print the value of x
    cout<<x<<endl;

    // here we print the address of x which is stored in the pointer
    cout<<ptr<<endl;

    // here we print and dereferencing the value of pointer which stored the value of x
    cout<<*ptr<<endl;

    // here we print the address of the poiner var which is stored in double pointer dptr
    cout<<dptr<<endl;

    /* here we printing the stored value of pointer and also dereferencing. 
    since the double pointer also stored the value of x because it is stored in the pointer. 
    it also prints the value of x */
    
    cout<<**dptr<<endl;


    return 0;

}