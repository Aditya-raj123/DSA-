// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] ={5,1,5,5,2,3};
    int n = 6;  
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // here we find the smallest number by sorting
    // storing the sorted number into integer
    int x = 0;
    for(int i=0;i<n;i++){
        x *=10;
        x +=arr[i];
    }
    cout<<x<<endl;

    // now we have to find the second smallest number by just checking the last 2 digit from the number
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
                break;
            }
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        // now again conevrt the array into integer
        int y = 0;
        for(int i=0;i<n;i++){
            y*= 10;
            y+=arr[i];
        }

        cout<<y<<endl;

        // now adding these two number
        cout<<"sum of the number is :"<<x+y<<endl;
    

    return 0;
}