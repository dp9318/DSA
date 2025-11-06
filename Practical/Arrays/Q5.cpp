#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];

    int sum = 0;
    for(int i=0;i<n;i++)
        if(n % (i+1) == 0)
            sum += a[i] * a[i];

    cout << sum;
}

