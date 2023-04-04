#include<iostream>
using namespace std;
class queue{
    int * arr;
    int front;
    int rear;

    public:
    queue(){
        int size = 10001;
        arr = new int[size];
        rear = 0;
        front = 0;
    }

    //public functions of queue 
    bool isEmpty(){
        if( front == rear == 0){
            return true;
        }else{
            return false;
        }
    }
     void push (int data){
        if(front == size)
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            arr[front] = data;
            front++;
        }
    }
    int deque(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return;
        }else{
            int ans = arr[rear];
            arr[rear] = -1;
            rear++;
            if(rear == front){
                rear = 0;
                front = 0;
            }
            return ans;
        }
    }
    int front(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        else{
            return arr[front];
        }
    }

    
};

int main(){
    queue q;
    q.push(12);

    return 0;
}