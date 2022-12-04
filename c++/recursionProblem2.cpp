#include<iostream>
using namespace std;
void print(int n);

int main(){
    int n; cin>>n;
    print(n);

    return 0;
}
void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<endl;
    print(--n);
}