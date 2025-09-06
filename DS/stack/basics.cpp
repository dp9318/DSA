#include <iostream>
using namespace std;

class Stack{
    private:
    int top;
    int *arr;
    int size;
    
    public:
    Stack(int N){
        size=N;
        arr = new int[size];
        top=-1;
    }
    void PUSH(int x){
        if(isEmpty()){
            top=0;
        }
        if(isFull()){
            cout<<"Stack Overflow! cannot push."<<endl;
            return;
        }
        arr[top]=x;
        top++;
        cout<<x<<" is pushed into stack."<<endl;
    }
    void POP(){
        if(isEmpty()){
            cout<<"Stack Underflow! cannot pop."<<endl;
            return;
        }
        top--;
        cout<<arr[top]<<" is poped from the stack."<<endl;
    }
    void Top(){
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return;
        }
        cout << arr[top - 1] << " is the top element of stack." << endl;
    }
    bool isEmpty(){
        return top <= 0;
    }
    bool isFull(){
        return top == size;
    }
};  

int main(){
    int ele;
    int con;
    int size; 
    cout<<"ENter the size of stack: ";
    cin>>size;

    Stack s(size);
    do{
        cout<<"=== STACK ==="<<endl;
        cout<<"1. PUSH"<<endl;
        cout<<"2. POP"<<endl;
        cout<<"3. Top"<<endl;
        cout<<"4. check Empty"<<endl;
        cout<<"5. check Full"<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"Enter your choice: ";
        cin>>con;
        cout<<endl;
        switch(con){
            case 0:
                cout<<"Exiting...!"<<endl;
                break;

            case 1:
                cout<<"Enter the element to push: ";
                cin>>ele;
                s.PUSH(ele);
                break;

            case 2: 
                s.POP();
                break;
            
            case 3: 
                s.Top();
                break;

            case 4:
                if(s.isEmpty()){
                    cout<<"Stack is Empty!"<<endl;
                    break;
                }
                cout<<"Stack is not Empty!"<<endl;
                break;

            case 5:
                if(s.isFull()){
                    cout<<"Stack is Full!"<<endl;
                    break;
                }
                cout<<"Stack is not full!"<<endl;
                break;

            default:
                cout<<"Invalid choice, retry!"<<endl;
                break;
        }
        cout<<endl;
    }while(con != 0);
    return 0;
}