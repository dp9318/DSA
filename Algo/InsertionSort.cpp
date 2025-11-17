#include <iostream>
using namespace std;

int* insertionSort(int arr[], int size){
    
    // The way insertion sort works
    for(int i=1; i<size; i++){
        int key=arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    // The modification i did
    // for(int i=1; i<size; i++){
    //     int key=arr[i];
    //     int j = i-1;
    //     while(j>=0 && arr[j]>key){
    //         swap(arr[j+1],arr[j]);
    //         j--;
    //         arr[j+1]=key;
    //     }
    // }

    return arr;
}

int main(){

    int arr[] = {64, 34, 25, 12, 22, 110, 90, 5};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,len_arr);
    for(int i=0; i<len_arr; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}