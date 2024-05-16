// Write a program to add two matrices and save
//  the result in one of the given matrices.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row";
    cin>>n;
    int m;
    cout<<"enter the number of column";
    cin>>m;
     int arr[n][m];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
     }
    cout<<endl;
   int brr[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>brr[i][j];
    }
   }
//    adding the two matrices
cout<<"the addition of the matrices";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]+brr[i][j]<<" ";
     }
     cout<<endl;
    }

    return 0;

}