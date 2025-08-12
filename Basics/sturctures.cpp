#include <iostream>
using namespace std;

struct cars
{
    string brand;
    string model;
    int year;
};


int main(){
    int i=1;
    while (i>0){
        cout<<"Wanna enter car details \nPress 1 \nExit press 0"<<endl;
        cin>>i;
        if(i==0){
            break;
        }
        if(i==1){
            cout<<"enter the name of car: ";
            string car_name;
            cin>>car_name;
            string *ptr =  &car_name;
            cars *ptr;
            car_name.brand = car_name;
        }
        else{
            cout<<"Please enter a valit number";
            i=2;
        }
    }
    return 0;
}