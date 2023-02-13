#include<iostream>
using namespace std;

int main(){
     int n; cin>>n;
     int** arr = new int*[n];

     for (int i = 0; i < n; i++)
     {
        arr[i] = new int[n];
     }
     //creation is done here

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; i < n; j++)
        {
            cin>>arr[i][j];
        }
        
     }
     //taking input is done here
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; i < n; j++)
        {
            cout << arr[i][j];
        }
        
     }
     //printing is done here
     //start releasing memory manually from heap
     for (int i = 0; i < n; i++)
     {
            delete []arr[i];
     }
     delete []arr;
     //memory release done here
     
    return 0;
    }