#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number to check whether it is prime or not: ";
    cin>>a;
    while(a==1 || a==0){
        cout<<"Please enter a different number: ";
        cin>>a;
    }
    if(a==2){
        cout<<"2 is a prime number";
    }
    for(int i=2; i<a; i++){   
        if(a%i==0){
            cout<<a<<" is not a prime number.";
            break;
        }    
    }
    
    return 0;
}

