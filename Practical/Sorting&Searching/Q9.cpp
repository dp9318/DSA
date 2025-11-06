#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++) cout << a[i] << " ";
}
