#include<iostream>
using namespace std;
bool linearSearch(int* arr,int size,int target){
    if(size == 0)
    return false;

    return linearSearch(arr+1,size-1, target);
}

int main(){
    int n; cin>>n;
    int arr[n];
    int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int target; 
    cout<<"enter the target :"<<endl;
    cin>>target;
    bool ans = linearSearch(arr,n,target);
    cout<<ans<<endl;

    return 0;
}