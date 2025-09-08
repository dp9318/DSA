#include <iostream>
using namespace std;

class Queue{

    private:
        int front;
        int rear;
        int *arr;
        int size;
    
    public:
        Queue(int N){
            size=N;
            arr = new int[size];
            front=0;
            rear=0;
        }

        void enqueue(int x){
            if(isFull()){
                cout<<"Queue is full, cannot enqueue!"<<endl;
                return;
            }
            arr[rear]=x;
            rear++;
            cout<<x<<" is entered into queue!"<<endl;
        }

        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty, cannot dequeue!"<<endl;
                return;
            }
            cout << arr[front] << " is removed from queue!" << endl;
            front++;
            if(front==rear){
                front=rear=0;
            }
        }

        bool isEmpty(){
            return rear == front ;
        }

        bool isFull(){
            return rear == size ; 
        }

        void Front(){
            if(isEmpty()){
                cout<<"Queue is empty, no elements at front!"<<endl;
                return;
            }
            cout<<arr[front]<<" is at the front!"<<endl;
        }
        void Rear(){
            if(isEmpty()){
                cout<<"Queue is empty, no elements at rear!"<<endl;
                return;
            }
            cout<<arr[rear-1]<<" is at the rear!"<<endl;

        }

        void display(){
            if(isEmpty()){
                cout<<"No element in the queue...!"<<endl;
                return;
            }
            cout<<"Elements of queue: ";
            for(int i= front; i<rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

    ~Queue(){
        delete[] arr;
    }
};