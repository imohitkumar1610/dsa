#include<iostream>
using namespace std;

int getLength(char name[]){
    int num = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        num++;    }
        return num;
    
}
void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

 bool checkPalindrome(char name[] , int n){
    int s = 0;
    int e = n -1;
    while(s<=e){
        if(name[s] == name[e]){
            s++;
            e--;
        }
        else{
         return 0;
         }
    }
    return 1;
 }

int main(){
 char name[20];
 cout<<"enter the name ;"<<endl;
 cin>>name;
 cout<<"you have entered :"<<endl;
 cout<<name<<endl;
//  int num = 0;
//  for (int i = 0; name[i]!='\0' ; i++)
//  {
//     num++;
//  }
int len = getLength(name);
 cout<<getLength(name)<<endl;
 reverse(name,len);
 cout<<name<<endl;
 cout<< checkPalindrome(name,len)<<endl;;



    return 0;
}