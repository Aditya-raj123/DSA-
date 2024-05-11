#include<iostream>
#include<climits>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
    return 0;

}