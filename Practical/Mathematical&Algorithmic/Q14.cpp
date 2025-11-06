#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    int pascal[10][10] = {0}; // Adjust size if n > 10

    for(int i=0; i<n; i++){
        pascal[i][0] = 1; // First element of each row
        pascal[i][i] = 1; // Last element of each row

        for(int j=1; j<i; j++)
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    }

    // Display the triangle
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            cout << pascal[i][j] << " ";
        cout << endl;
    }
}
