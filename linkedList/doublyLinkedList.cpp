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
void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head -> pre = temp;
    head = temp;
}
int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);
    insertAtHead(head,20);
    print(head);
    cout<<getLength(head)<<endl;
    return 0;
}