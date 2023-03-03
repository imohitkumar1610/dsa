#include<iostream>
using namespace std;
class a{
    public:

    void func1(){
        cout<<"inside function A"<<endl;
    }
};
class b: public a{
    public:
    void func2(){
        cout<<"inside function B"<<endl;
    }
};
class c: public a{
    public:
    void func3(){
        cout<<"inside function C"<<endl;
    }
};

int main(){

    return 0;
}