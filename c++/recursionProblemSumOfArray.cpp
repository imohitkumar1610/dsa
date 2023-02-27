#include<iostream>
using namespace std;
int sumOfArray(int* arr,int size){
    int sum=0;
    if(size == 1)
    return arr[0];

    if(size <= 0)
    return 0;

    sum = sumOfArray(arr,size-1) + arr[size-1];
    return sum;
}
int main(){
    int n; cin>>n;
    int arr[n];
    int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int ans = sumOfArray(arr,n);
    cout<<ans<<endl;
    return 0;
}