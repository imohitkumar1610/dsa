#include<iostream>
using namespace std;
class animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class dog : public animal {
    public:
     string breed;
};

class gsd : public dog{
    public:
    void gsdSpeaking(){
        cout<<"gsd speaking"<<endl;
    }
};
int main(){

    gsd d;
    // d.speak();
    d.gsdSpeaking();

    return 0;
}