#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the hieght of pyramid: ";
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        for(int p=0; p<=i;p++){
            cout<<" ";
        }
        for(int j=n-i; j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}





