#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of rows to the butterfly: ";

    int n;
    cin>>n;
    int r=n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        for(int p=2*(n-i); p>2; p--){
            cout<<"  ";
        }
        for(int k=0; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int a=0; a<n; a++){
        for(int b=n-a; b>0; b--){
            cout<<"* ";
        }
        for(int c=1; c<=a*2; c++){
            cout<<"  ";
        }
        for(int d=n-a; d>0; d--){
            cout<<" *";
        }
        cout<<endl;
    }



    return 0;
}