#include <iostream>
using namespace std;

int main() {
    int n, target; 
    cin >> n >> target;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int l=0, r=n-1;
    while(l<r){
        int sum = a[l] + a[r];
        if(sum == target){ 
            cout << a[l] << " " << a[r]; 
            return 0;
        }
        else if(sum < target) l++;
        else r--;
    }
    cout << "No such pair";
}
