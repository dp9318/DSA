#include <iostream>
#include <D:\proj\CPP DSA\DS\stack\Stack.cpp>
using namespace std;

int main(){
    cout<<"The stack has a fixed size of 5 elements."<<endl;
    Stack s(5);
    int choice=-1, element;
    do{
        cout<<"=== STACK ==="<<endl;
        cout<<"1. to PUSH"<<endl;
        cout<<"2. to POP"<<endl;
        cout<<"3. to display all elements"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the element you want to inesert: "; 
                cin>>element;
                s.PUSH(element);
                break;
            
            case 2:
                s.POP();
                break;

            case 3:
                s.display();
                break;
            
            case 0:
                cout<<"Exiting...!"<<endl; 
                break;
                
            default:
                cout<<"Please enter a valid choice...!";
                break;
        }
        cout<<endl;
    }while (choice !=0);

    return 0;
}