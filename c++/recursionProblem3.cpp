//sum of first n natural numbers using recursion

#include<bits/stdc++.h>
using namespace std;
int sum(int);

int sum(int n){
    if(n<=1)
        return n;   
     return n + sum(n-1);
}
 
 int main(){
    int n; cin>>n;
    cout<<sum(n)<<endl;
    return 0;
 }

// another way of doing the same

#include<bits/stdc++.h>
using namespace std;

int fun(int i,int sum);
int fun(int i,int sum){
   if(i<1){
      return sum;
   }
   return fun(i-1,sum+i);
}

int main(){
   int n; cin>>n;
   cout<<fun(n,0)<<endl;
   return 0;
}