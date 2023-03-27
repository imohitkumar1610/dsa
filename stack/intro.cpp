#include<iostream>
// #include <stack>
using namespace std;

class stack{
    // properties:
    public: 
    int *arr;
    int top;
    int size;


    // function
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - 1 > 1){
            top++;
            arr[top] = element;
        }else{
            cout<<"stackOverflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stackUnderflow"<<endl;
        }
    }
    int peak(){
        if(top>=0){
        return arr[top];
        }else{
            cout<<"stackIsEmpty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }else
        return false;
    }
};

int main(){
    // stack <int> s;
    // s.push(20);
    // cout<<s.top()<<endl;
    // // s.pop();
    // // cout<<s.empty()<<endl;
    // s.push(30);
    // s.push(56);
    // cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    // s.push(23);
    // cout<<"size of atck is "<<s.size()<<endl;
    stack st(5);

    st.push(5);
    st.push(44);
    st.push(56);
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    // cout<<st.isEmpty()<<endl;

    return 0;
}