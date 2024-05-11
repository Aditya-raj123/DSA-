#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=1;i<=n-1;i++){
        if(min>arr[i]){
        min=arr[i];
        break;
        }
        cout<<min<<endl ;
    }
    return 0;

}