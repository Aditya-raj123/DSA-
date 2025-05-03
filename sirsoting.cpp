#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {5,4,6,3,2,1};
    int n = 6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // bubble sort
    // time complexity : 0(n^2)
    // space complexity : 0(1 )
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            // condition
            if(arr[j] > arr[j+1]){
                // swapping
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
