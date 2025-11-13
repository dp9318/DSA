#include <iostream>
using namespace std;

int* input(int size){
    int* arr = new int[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return arr;
}

void arrMax(int arr[], int size, int* max){
    if(size==0) return;
    if(arr[size-1]>*max){ *max = arr[size-1];}
    arrMax(arr,size-1,max);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";

    cin>>n;
    cout<<"Enter the elements: ";
    int* arr=input(n);

    int max=arr[0];
    arrMax(arr,n,&max);
    cout<<"Max of the array: "<<max;
    delete [] arr;
    return 0;
}