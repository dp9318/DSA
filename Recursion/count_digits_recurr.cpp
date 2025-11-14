#include <iostream>
using namespace std;

void countNum(int num, int* count){
    if(num==0) return;
    (*count)++;
    countNum(num/10,count);
}

int main(){

    int num; 
    cout<<"Enter a number: ";
    cin>>num;

    int count = 0;
    if(num==0) count = 1;
    else countNum(num, &count);

    cout<<"Number of digits: "<<count;
    return 0;
}

