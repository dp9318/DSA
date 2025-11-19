# include <iostream>
using namespace std;

int* mergeSort(int arr[], int size);

int *merge(int arr1[],int size1, int arr2[], int size2);

int * input(int size);

void print(int arr[], int size);

int main(){

    int n; 
    cout<<"Enter the size if array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int *arr = new int[n];
    arr = input(n);

    cout<<"Sorted array: ";
    arr=mergeSort(arr,n);
    print(arr,n);
    return 0;
}

int * input(int size){
    int *arr = new int[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    return arr;
}

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}

int *merge(int arr1[],int size1, int arr2[], int size2){
    int max = size1+size2;
    int *result = new int[max];
    
    int i,j,count;
    i=j=count=0;
    
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            result[count++]=arr1[i++];
        }
        else{
            result[count++]=arr2[j++];
        }
    }
    while(i<size1){
        result[count++]=arr1[i++];
    }
    while(j<size2){
        result[count++]=arr2[j++];
    }
    return result;
}

int* mergeSort(int arr[], int size){
    if(size==0 || size==1){
        return arr;
    }
    int mid = size/2;

    int *left = new int[mid];
    for(int i=0; i<mid; i++){ 
        left[i]=arr[i];
    }
    int *right = new int[size-mid];
    for(int i=0; i<size-mid; i++){
        right[i]=arr[mid+i];
    }
    int *leftSort = mergeSort(left,mid);
    int *rightSort = mergeSort(right,size-mid);
    int *result = merge(leftSort,mid,rightSort,size-mid);
    return result;
}