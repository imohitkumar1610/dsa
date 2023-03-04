#include<iostream>
using namespace std;
class a{
    public:

    void func1(){
        cout<<"inside function A"<<endl;
    }
};
class b{
    public:
    void func1(){
        cout<<"inside function B"<<endl;
    }
};
class c: public a , public b{
    public:
    void func3(){
        cout<<"inside function C"<<endl;
    }
};

int main(){
    c object;
    object.b::func1();
    return 0;
}