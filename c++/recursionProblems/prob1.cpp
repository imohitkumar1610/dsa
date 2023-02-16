#include<iostream>
using namespace std;

//factorial problem 
int fact(int n){
    if (n == 0)
        return 1;
    else
        return n*fact(n-1);
}
//2^n programme 
int power(int n){

    if (n == 0)
      return 1;
      else
      return 2*power(n-1);
}
//print counting 
void count(int n){
    if(n == 1)
    {
        cout<<1<<endl;
        return;
    }
    else
    {
        
        count(n -1);
        cout<<n<<endl;
    }
}

int main(){
    int n; cin>>n;
    // cout<<fact(n)<<endl;
    // cout<<power(n)<<endl;
     count(n);

    return 0;
}