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
    // time complexity : 0(n)
    // space complexity : 0(1 )
    bool flag = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            // condition
            if(arr[j] > arr[j+1]){
                // swapping
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// bubble sort is a stable sort 

