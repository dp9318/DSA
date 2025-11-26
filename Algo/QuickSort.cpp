#include <iostream>
using namespace std;

int partition(int *arr, int start, int end){
    int i=start-1;
    int pivot = arr[end];
    for(int j=start; j<end; j++){
        if(arr[j]<=pivot){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[end];
    arr[end] = temp;

    return i+1;
}

void  QuickSort(int *arr, int l, int r){
    if(l<r){
        int p = partition(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr, p+1, r);
    }
}

int *input(int *arr, int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return arr;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements: ";
    arr = input(arr,n);

    QuickSort(arr,0,n-1);

    cout<<"\nSorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}