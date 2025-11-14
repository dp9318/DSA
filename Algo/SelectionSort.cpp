#include <iostream>
using namespace std;

int* selectionSort(int arr[], int size){
    for(int i=0; i<size; i++){  //sorted array iteration
        int min_ele=arr[i];
        int min_idx=i;
        for(int j=i+1; j<size; j++){    //unsorted array iteration
            if(min_ele>arr[j]){    // finding the minimum element
                min_ele=arr[j];
                min_idx=j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
    }
    return arr;
}

//Taking input in a function
int* input(int size){ 
    int* arr = new int[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return arr;
}

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int* arr = new int[n];
    arr=input(n);

    selectionSort(arr,n);
    
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    delete [] arr;
    return 0;
}