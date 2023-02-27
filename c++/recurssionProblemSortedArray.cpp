#include<iostream>
using namespace std;
bool isSorted(int* arr, int size){
    if(size == 0 || size == 1)
    return true;
    if(arr[0]>arr[1])
    return false;
    else{
       return isSorted(arr+1,size-1);
    }
    

}
int main(){
    int n; cin>>n;
    int arr[n];
    int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    bool ans = isSorted(arr,n);
    if(ans)
    cout<<"arrayisSorted"<<endl;
    else
    cout<<"arrayIsNotSorted";
    
    
}