// Sort an array of 0s, 1s, and 2s without using a standard sorting algorithm

#include <iostream>
using namespace std;

int * sort(int arr[], int size){

    int count0=0, count1=0, count2=0;
    for(int i=0; i<size; i++){

        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    for(int i=0; i<size; i++){
        if(i<count0){ 
            arr[i]=0;
        }
        else if(i<count0+count1){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
    return arr;

}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the 0s, 1s and 2s elements: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int * sorted = sort(arr, n);

    cout<<"\nSorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}