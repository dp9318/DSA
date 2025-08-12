#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter twi integers you wanna add: ";
    cin>>a>>b;
    //without an additional variable
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<a+b<<endl;

    //with a variable
    int sum = a + b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
}