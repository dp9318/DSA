#include <iostream>
using namespace std;

int* input(int size){
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return arr;
}

void arrSum(int arr[], int size,int* sum){
    if(size==0) return;
    *sum+=arr[size-1];
    arrSum(arr,size-1,sum);
}

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    int* arr=input(n);

    int sum=0;
    arrSum(arr,n,&sum);

    cout<<"SUm of array = "<<sum;
    delete [] arr;
    
    return 0;
}