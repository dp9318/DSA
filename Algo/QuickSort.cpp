#include <iostream>
using namespace std;

int partition(int *arr, int start, int end){
    int i=start-1;
    int pivot = arr[end];
    for(int j=start; j<end; j++){
        
    }
    return pivot;
}

int QuickSort(int *arr, int l, int r){

    if(l<r){
        int pivot = partition(arr,l,r);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr, pivot+1, r);
    }

}

int main(){

    return 0;
}