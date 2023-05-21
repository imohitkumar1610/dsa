#include<bits/stdc++.h>
using namespace std;
class node{

    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter the data :"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout<<"Enter the data for inserting the left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for inserting the right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
    
}

void levelOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){//this means previous level got completed 
            cout<<endl;
            if(!q.empty()){//q still have some elements 
                q.push(NULL); // separator because q is not empty thus we need one more separator 
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
    }
    }
        
}
}

void inOrder(node* root){
    //base case 
    if(root == NULL){
        return;
    }
    //recurssive call 
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(node* root){
    //base case 
    if(root == NULL){
        return;
    }
    //recurssive call 
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node* root){
    //base case 
    if(root == NULL){
        return;
    }
    //recurssive call 
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void buildFromLO(node* &root){
    queue<node*> q;
    cout<<"enter data for root :"<<endl;
    int data ;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"enter left node for :"<< temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"enter right node for :"<< temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

int main(){
    node* root = NULL;
    buildFromLO(root);
    // root = buildTree(root); 
    levelOrderTraversal(root);
    // inOrder(root);
    // preOrder(root);
    // postOrder(root);
    return 0;
}
