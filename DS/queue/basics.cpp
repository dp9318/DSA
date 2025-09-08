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
            return rear > size-1 ; 
        }

        void Front(){
            if(isEmpty()){
                cout<<"Queue is empty, no elements at front!"<<endl;
                return;
            }
            cout<<arr[front-1]<<" is at the front!"<<endl;
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
        }
    ~Queue(){
        delete[] arr;
    }
};

int main(){
    
    int ele, size, choice=-1;
    cout<<"Enter the size of Queue: ";
    cin>>size;
    Queue q(size);

    do{

        cout<<"=== Queue ==="<<endl;
        cout<<"1. enqueue"<<endl;
        cout<<"2. dequeue"<<endl;
        cout<<"3. check if empty"<<endl;
        cout<<"4. check if full"<<endl;
        cout<<"5. Front element"<<endl;
        cout<<"6. Rear element"<<endl;
        cout<<"7. display all elements"<<endl;
        cout<<"0. EXIT"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 0: 
                cout<<"Exiting...!"<<endl;
                break;

            case 1:
                cout<<"Enter the element: ";
                cin>>ele;
                q.enqueue(ele);
                break;
            
            case 2:
                q.dequeue();
                break;

            case 3:
                if(q.isEmpty()){
                    cout<<"Queue is empty!"<<endl;
                    break;
                }
                cout<<"Queue is not empty!"<<endl;
                break;

            case 4:
                if(q.isFull()){
                    cout<<"Queue is full!"<<endl;
                    break;
                }
                cout<<"Queue is not full!"<<endl;
                break;
            
            case 5:
                q.Front();
                break;
                
            case 6: 
                q.Rear();
                break;
            
            case 7:
                q.display();
                break;

            default:
                cout<<"Enter a valid choice!"<<endl;
                break;
        }
        cout<<endl;

    }while(choice != 0);
    return 0;
}