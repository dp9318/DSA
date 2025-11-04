#include <iostream>
using namespace std;

int main(){

    int n; 
    cout<<"Enter the number of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the stock prices: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count=0;
    int profit[n*n];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            profit[count] = arr[j]-arr[i];
            count++;
        }
    }
    int max=profit[0];
    for(int i=0; i<count; i++){
        if(max<profit[i]){
            max=profit[i];
        }
    }
    
    if(max<0){
        max=0;
    }
    cout<<max;


    return 0;
}