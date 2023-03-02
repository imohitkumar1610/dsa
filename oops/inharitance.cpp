#include<iostream>
using namespace std;

class human{
    public:

    int height;
    int weight;
    int age = 10;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int weight){
        this -> weight = weight;
    }
};

class male : public human {
    public:
    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }

};

int main(){
    male object1;
    cout<<object1.age<<endl;

    return 0;
}