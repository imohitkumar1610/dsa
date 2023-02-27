#include<iostream>
using namespace std;

bool binarySearch(int* arr,int s, int e, int k){
    if(s>e)
    return false;
    int mid = s + (e-s)/2;
    if(arr[mid] == k)
    return true;
    if(arr[mid]>k){
        return binarySearch(arr ,s, mid - 1, k);
    }
    else
    return binarySearch(arr, mid+1, e, k);

}
int main(){
    int n; cin>>n;
    int s = 0;
    int arr[n];
    int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int key; 
    cout<<"enter the target :"<<endl;
    cin>>key;
    bool ans = binarySearch(arr,s,n,key);
    cout<<ans<<endl;

    return 0;
}