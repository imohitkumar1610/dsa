#include<bits/stdc++.h>
using namespace std ;
void printName(int);

int main(){
    int count = 0;
    printName(count);
    return 0;
}
void printName(int count){
    if(count == 5){
        return;
    }
        cout<<"mohit"<<endl;
        count++;
        printName(count);
}