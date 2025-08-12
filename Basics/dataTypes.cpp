#include <iostream>
using namespace std;

int main(){
    /* there are 5 types of data in cpp
        • Integer:                  int         4 bytes
        • Character:                char        1 byte
        • Floating point number:    float       4 bytes
        • Boolean :                 bool        1 byte
        • Double :                  double      8 bytes
    
    */
   //Integer
    int integer = 2;
    cout<<"Size of integer is: "<<sizeof(integer)<<" Bytes"<<endl;

    //Character
    char character='a';
    cout<<"Size of character is: "<<sizeof(character)<<" Byte"<<endl;

    //Floating point number
    float floating_number= 10.99;
    cout<<"Size of float is: "<<sizeof(floating_number)<<" Bytes"<<endl;

    //Boolean
    bool boolean = false;
    cout<<"Size of boolean is: "<<sizeof(boolean)<<" Bytes"<<endl;

    //Double
    double double_number = 9.5678382;
    cout<<"Size of double is: "<<sizeof(double_number)<<" Bytes"<<endl;
    return 0;
}