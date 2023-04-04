#include<bits/stdc++.h>
using namespace std;


int main(){
    queue <int> q;
    q.push(12);
    q.push(15);
    q.push(57);
    q.push(55);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}