#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    int m;
    cout<<"enter the number of column";
    cin>>m;
    int arr[n][m];
    cout<<"enter the elemnet"; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;
    return 0;

}