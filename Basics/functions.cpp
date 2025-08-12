#include <iostream>
using namespace std;
void my_name(string name){
    cout<<name;
}

int main(){

    cout<<"Enter your name: ";
    string name;
    cin>>name;
    my_name(name);
    return 0;
}

/*
    functions are defined and then executed as called in the main fuction.
    everything in cpp starts from the "main" function.

    here we can define all types of returning functions by providing the particular data type.

    "use void if you dont want anything in return."
*/

