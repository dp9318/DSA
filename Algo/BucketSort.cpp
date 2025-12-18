#include <iostream>
#include <math.h>
using namespace std;

void BucketSort(int *arr, int size){
    
    int parts = sqrt(size);
    int *newarr = new int[size,parts];
    int max = arr[0];
    for(int i=0; i<size; i++)
    for(int i=0; i<size; i++){
        int bucket = arr
        
    }

}

void *input(int *arr, int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    int *arr = new int[n];
    input(arr,n);



    return 0;
}