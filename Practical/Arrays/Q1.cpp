//Write a program to reverse an array.

#include <iostream>
using namespace std;

int * reverseArr(int arr[], int size){
    int n=size;
    for(int i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    return arr;
}

//another version and more simpler

void anReverseArr(int arr[], int size, int reverse[]){
    for(int i=0; i<size; i++){
        reverse[i]=arr[size-i-1];
    }
}

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n], cpy_arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cpy_arr[i]=arr[i];
    }

    int *reversed = reverseArr(arr,n);
    cout<<"Reversed : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    // another way

    cout<<"\nAnother way of reversing: ";
    
    int another_reverse[n];
    anReverseArr(cpy_arr,n,another_reverse);
    for(int i=0; i<n; i++){
        cout<<another_reverse[i]<<" ";
    }

    return 0;
}