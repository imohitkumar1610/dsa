#include<iostream>
using namespace std;
class b{
    public:
    int a;
    int b;
    void print(){
        cout<<"hello"<<endl;
    }
};

class a{
    public:
    void sayHello(){
        cout<<"hello"<<endl;
    }
    //function overloading or creating multiple functions with same name can be done but they should have a different signature
    //but if you only change the return type of the function then that is not allowed
    //means either different type og argument or different number of argument 
    void sayHello( string name){
        cout<<"hello "<<name<<endl;
    }
    void operator+ (b &obj){
        int value1 = this -> a;
        int value2 = obj.a;

        cout<<"output "<<value2 - value1<<endl;
    }
};

int main(){
    b obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    return 0;
}