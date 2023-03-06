#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    //constructor 
    node(int d){
        this->data = d;
        this->next=NULL;
    }
    ~node(){
        int value = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node having data "<<value<<endl;
    }
};

void insertNode(node* &tail, int element, int d){
    //assuming the element is present in the list 

    if(tail == NULL){
        //empty list 
        node* newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non empty list 
        //assuming the element is present 
        node* curr = tail;
        while(curr -> data != element){
            curr = curr->next;
        }
        //element found -> curr os representing element wala node 
        node* temp = new node(d);
        temp->next = curr->next;
        curr -> next = temp;

    }

}
void deleteNode(node* &tail , int value){
    //empty list 
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return ;
    }else{
        //non empty list 
        //assuming that the element is present in the list 
        node* pre = tail;
        node* current = pre->next;
        while(current->data != value){
            pre = current;
            current = current -> next;
        }
        pre->next = current->next;
        //  single node linked list 
        if(current == pre){
            tail = NULL;
        }
        // >= 2 nodes in  list 
        if(tail == current){
            tail = pre;
        }
        current -> next = NULL;
        delete current;

    }
}
void print(node* tail){
    node* temp = tail;
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    } 
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail != temp);
    cout<<endl;
}
   
int main(){

    node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    deleteNode(tail,3);
    print(tail);

    return 0;
}