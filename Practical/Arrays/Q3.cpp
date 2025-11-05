/*
 Write a program to find the maximum profit from stock prices. Allow only one
buy and one sell transaction, where the buy must occur before the sell. If no
profit is possible, return 0
*/

#include <iostream>
using namespace std;

int main(){
    int n, max=0;
    cout<<"Enter the number of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the stock prices: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(max<arr[j]-arr[i]){
                max=arr[j]-arr[i];
            }
        }
    }
    cout<<"The max possible profit = "<<max;
    return 0;
}