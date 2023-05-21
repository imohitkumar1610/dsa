#include<bits/stdc++.h>
using namespace std;
int fundNum(int x, int y){
    int count = 0;
    for (int i = x; i <= y; i++)
    {
        if(i%15 == 0 || i%3==0 || i%5 == 0){
            count++;
        }
    }
    return count;
    
}

int main(){
    int x,y; cin>>x>>y;
    int findNum(int,int);
    int count = findNum(x,y);
    cout<<count<<endl;

    return 0;
}