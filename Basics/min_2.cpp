#include <iostream>
using namespace std;    
int main() {
    int a, b;
    cout<< "Enter two integers you want to compare: ";
    cin>>a>>b;
    if(a<b){
        cout<<a<<" is less than "<<b<<endl;
    }
    else{
        cout<<b<<" is less than "<<a<<endl;
    }
    return 0;
}