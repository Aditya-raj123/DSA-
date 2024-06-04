#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n)
    return;
    display(arr,n,idx+1);
    cout<<arr[idx]<<endl;
}
int main(){
    int arr[7]={2,1,6,3,9,0,2};
    int n=sizeof(arr)/4;
    display(arr,n,0);
    return 0;
    
}