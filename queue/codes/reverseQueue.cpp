#include<bits/stdc++.h>

using namespace std;


void reverseQueue(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        int elem = q.front();
        q.pop();
        s.push(elem);
    }

    while(!q.empty()){
        int elem = s.top();
        s.pop();
        q.push(elem);
    }

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
