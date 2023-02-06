#include<iostream>
using namespace std;

// faltu character hata lo pehle
    bool valid(char ch){
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
    }

    bool isPalindrome(string s){
        int i =0;
    string temp = "";

    for (int j = 0; j < s.length(); j++)
    {
        if(valid(s[j])){
            swap(s[i],s[j]);
            temp.push_back(s[j]);
        }
    }
    }

int main(){
    
    
    return 0;
}