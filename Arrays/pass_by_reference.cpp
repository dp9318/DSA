#include <iostream>
using namespace std;

void pass_by_reference(int arr[]){
    arr[0]=10000;
}

void printing(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}

int *input(int size){
    int *arr= new int[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return arr;
}

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];

    cout<<"Enter the elements: ";
    arr=input(n);

    cout<<"Array before modification: ";
    printing(arr,n);

    pass_by_reference(arr);
    cout<<"\nArray after modification: ";
    printing(arr,n);

    return 0;
}