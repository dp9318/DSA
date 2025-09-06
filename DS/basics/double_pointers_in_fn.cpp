#include <iostream>
using namespace std;

//Function to allocate memory using double pointers
void allocate_memory(int **ptr){

    //allocate memory for 1 integer and make *ptr point to p in main to point to it
    *ptr= (int*)malloc(sizeof(int));

    //store the value of 200 in the allocated memory
    **ptr=  200;

}

int main(){
    int *p = NULL; //p is a int pointer, starts at null(nowhere)

    allocate_memory(&p); //pass address of p to modify p in function itself

    cout<<*p; // now p points to the allocated memory assigned 200
    return 0;
}