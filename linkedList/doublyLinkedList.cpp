#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* pre;
    node* next;

    //constructor 
    node(int d){
        this -> data = d;
        this -> pre = NULL;
        this -> next = NULL;
    }
    ~node(){
        int value = this -> data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node having data "<<value<<endl;
    }
};
// printing and traversing through the linked list 
void print(node* head){
    node* temp = head;
    
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//length of the linked list 
int getLength(node* head){
    int length = 0;
    node* temp = head;
    while(temp != NULL){
        length ++;
        temp = temp->next;
    }
    return length;
}
void insertAtHead(node* &head, node* &tail,  int d){
    //empty list 
    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }else{
    node* temp = new node(d);
    temp -> next = head;
    head -> pre = temp;
    head = temp;
    }
    
    
}
void insertAtTail(node* &head, node* &tail, int d){
    if(tail == NULL){
        node* temp = new node(d);
        tail=temp;
        head = temp;
    }else{
    node* temp = new node(d);
    tail -> next = temp;
    temp -> pre = tail;
    temp = tail;
    }
}
void inserAtPosition(node* tail, node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    //insertAtLast position 
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    // insert a position
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp -> next;
    temp -> next-> pre = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->pre = temp;

}
//deletion of Node 
void deleteNode(node* &head,  int position){
    if(position == 1){
        node* temp = head;
        temp->next->pre = NULL;
        head= temp->next;
        temp->next=NULL;
        delete(temp);
    }else{
        //deleteany middle noed or last node 
        node* curr = head;
        node* pre = NULL;
        int cnt = 1;
        while(cnt < position){
            pre = curr ;
            curr = curr -> next;
            cnt++;
        }
        curr -> pre =NULL;
        pre -> next = curr->next;
        curr ->next = NULL;
        delete curr;
    }
}
int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,tail,20);
    print(head);
    cout<<getLength(head)<<endl;
    insertAtTail(tail,tail,55);
    print(head);
    cout<<getLength(head)<<endl;
    inserAtPosition(tail,head,3,88);
    print(head);
    cout<<getLength(head)<<endl;
    deleteNode(head,2);
    print(head);
    cout<<getLength(head)<<endl;
    deleteNode(head,1);
    print(head);
    cout<<getLength(head)<<endl;
    return 0;
}