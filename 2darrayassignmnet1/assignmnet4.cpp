// Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row ";
    cin>>n;
    int m;
    cout<<"enter the number of column";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<a[i][j]){
                max=a[i][j];

            }
        }
    }
    cout<<max;
    return 0;

}