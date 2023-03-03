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

class human{
    public:
    void humanSpeaking(){
        cout<<"human is singing"<<endl;
    }
};
//multiple inheritance
class good : public animal , public human {

};

int main(){

    good s;
    s.humanSpeaking();
    s.speak();

    return 0;
}