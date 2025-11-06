/*
Write a program to find the majority element in an array. The majority element
appears more than n/2 times 
*/

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int candidate = a[0], count = 1;
    for(int i=1;i<n;i++){
        if(a[i]==candidate) count++;
        else if(--count==0){ candidate = a[i]; count = 1; }
    }

    // Optional check if candidate really is majority
    count = 0;
    for(int x:a) if(x==candidate) count++;
    if(count > n/2) cout << candidate;
    else cout << "No majority element";
}
