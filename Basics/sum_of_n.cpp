#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of terms: ";
    int a;
    int sum=0;
    cin>>a;
    for(int i=1; i<=a; i++){
        sum=sum+i;
    }
    // A while loop can work too
    
    // int count=1; 
    // while(count<=a){
    //     sum=sum+count;
    //     count+=1;
    // }
    
    cout<<"Sum = "<<sum;

    return 0;
}