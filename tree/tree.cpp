#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node( int data){
        this->data = data;
        this->left = NULL;
        this-> right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data "<< endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1)
        {return NULL;}

        cout<<"Enter data for left " <<data<<endl; 
        root->left = buildTree(root->left);
        cout<<"Enter data for inserting in right "<<data<<endl;
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

        if(temp == NULL){ //purana level completed 
            cout<<endl;
            if(!q.empty()){ // queue still has some elements 
                q.push(NULL);
            }
        }
         else{
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
    inOrder(root->left);
    cout<< root->right<<" ";
    inOrder(root->right);
}

int main(){
    node* root = NULL;
    //creating tree 
    root = buildTree(root);

    //levelOrderTraversal 
    cout<<"level order traversal output : "<<endl;
    // levelOrderTraversal(root);
    inOrder(root);

    return 0;
}