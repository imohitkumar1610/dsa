#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    int elem = q.front();
    q.pop();
    reverseQueue(q);
    q.push(elem);
}

void print(queue<int> &q){
    cout<<"Queue element are..."<<endl;
	while(!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}cout<<endl;
}

int main(){
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(6);

    reverseQueue(q);
    

    return 0;
}