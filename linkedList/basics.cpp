#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
//constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
//destructor 
    ~node (){
        int value = this-> data;
        //memory free 
        if(this-next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" memory is free for node storing data "<<value<<endl;
    }
};

void insertAtHead(node* &head, int d){
    //new node creation 
    node* temp = new node(d);
    //new node created
    // updating pointers
    temp -> next = head;
    head = temp; 
}

void insertAtTail(node* &tail, int d){
    //new node creation 
    node* temp = new node(d);
    tail->next = temp;
    tail = tail->next;//or tail = temp;
}

void insertAtPosition(node* &tail, node* &head, int position, int d){
    node* temp = head;
    //inserting at first position 
    if (position == 1)
    {
        insertAtHead(head,d);
        return;
    }
    
    int cnt = 1;
    while(cnt < position){
        temp = temp->next;
        cnt ++;
    }
    //insert at last position 
    if (temp->next == NULL)
    {
    insertAtTail(head,d);
    return;
    }
    
    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
}
//deletion of node
void deleteNode(int position, node* &head){
    // deleting first node
    if(position == 1){
        node* temp = head;
        head = head->next;
        temp ->next = NULL;
        delete temp;
    }else{
        //deleting any middle node or last node
        node* cur = head;
        node* pre = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            pre = cur;
            cur = cur->next;
            cnt++;
        }
        pre->next = cur->next;
        cur -> next = NULL;
        delete cur;
    }
}

void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;
    node* head = node1;//pointer to locate the node positions
    node* tail = node1;
    // cout<< (*node1).data<<endl; //node 1 ia a pointer and it contains address of node 
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,5);
    print(head);
    insertAtHead(head,20);
    print(head); 
    insertAtTail(tail,44);
    print(head);
    insertAtPosition(tail,head,1,22);
    print(head);
    deleteNode(6,head);
    print(head);
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    // cout<<"tail next "<<head->next<<endl;
 return 0;
}