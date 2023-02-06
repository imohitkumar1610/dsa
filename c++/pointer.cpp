#include<iostream>
using namespace std;

// int main(){
    // int num = 5;
    // int *ptr = &num;

    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&num<<endl;
    // cout<<*&num<<endl;
    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<< *ptr<<" "<<f<<" "<<p;
//     int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];
//     return 0;
// }

void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}