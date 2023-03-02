#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age = 24;
    int height;
    
    public:
    int getAge(){
        return this->age;
    }
};

int mian(){
    student s;
    cout<<s.getAge()<<endl;;
    

    return 0;
}