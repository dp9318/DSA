#include <iostream>
using namespace std;

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++)
            if(a[j] < a[minIndex])
                minIndex = j;
        swap(a[i], a[minIndex]);
    }

    cout << "Sorted array: ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
}
