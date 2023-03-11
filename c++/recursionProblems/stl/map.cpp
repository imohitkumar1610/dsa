#include<iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> marks;
    marks["one"] = 10;
    marks["two"] = 20;
    marks["three"] = 30;
    marks["four"] = 40;
    //this is how you can insert in a map 
    marks.insert({"mohit", 98});
    map<string,int>::iterator it;
    for (it = marks.begin(); it != marks.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
        // or you can  use the below statement 
        // cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    // it->first will give you the e and it-> second will give you the value 
    
    // cout<<marks["one"]<<endl;
    return 0;
}