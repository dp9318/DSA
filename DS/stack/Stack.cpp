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
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to display." << endl;
            return;
        }
        cout << "Stack elements (top to bottom): "<<endl;
        for (int i = top-1; i >= 0; i--) {
            cout << "| " <<arr[i] << " |";
            cout << endl;
        }
        cout<<"|____|"<<endl;
    }
}; 