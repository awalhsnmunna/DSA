// Question : https://www.geeksforgeeks.org/problems/reverse-an-array/0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    // Reverse Logic
    for(int j=0; j<size/2; j++){
        int temp = arr[j];
        arr[j] = arr[size-1-j];
        arr[size-1-j] = temp;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i];
        if(i!=size-1){
            cout<<",";
        }
        cout<<" ";
    }

    return 0;
}