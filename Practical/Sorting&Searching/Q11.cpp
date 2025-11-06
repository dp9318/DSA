#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(a)/sizeof(a[0]);
    int target = 10;

    int low = 0, high = n - 1, mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(a[mid] == target){
            cout << "Element found at index " << mid;
            return 0;
        }
        else if(a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    cout << "Element not found";
}
