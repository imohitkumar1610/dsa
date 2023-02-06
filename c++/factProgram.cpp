#include<bits/stdc++.h>
using namespace std;
//  int fact(int m){
//     int fact = 1;
//     for(int i=1;i<=m;i++){
//         fact = fact*i;
//     }
//     return fact;
//  }

//  int ncr(int n,int r){
//     int num = fact(n);
//     int deno = fact((n-r));
//     int ans = num / deno;

//     return ans;

bool isPrime(int num){
    
    for (int i = 2; i < num-1; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
    
}
//  }
int main(){
    // cout<<ncr(5,4)<<endl;
    cout<<isPrime(6)<<endl;
    return 0;
}