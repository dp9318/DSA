#include <iostream>
using namespace std;

class BubbleSort{
    public:
    int* Sort(int arr[], int size){
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        return arr;
    }
    
    int* input(int size){
        int* arr = new int[size];
        for(int i=0; i<size; i++){
            cin>>arr[i];
        }
        return arr;
    }
};



int main(){

    BubbleSort bs;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements: ";
    int* arr = bs.input(n);

    bs.Sort(arr,n);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    delete [] arr;
    return 0;
}