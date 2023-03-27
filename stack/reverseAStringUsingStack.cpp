#include<bits/stdc++.h>
using namespace std;

int main(){
 string str;
 cin>>str;
 cout<<str<<endl;
 stack <char> s;
 for (int i = 0; i < str.size(); i++)
 {
    s.push(str[i]);
 }
    char arr[str.size()];

    for (int i = 0; i < str.size(); i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
 
 
    return 0;
}
