// Write a program to print the row number
//  having the maximum sum in a given matrix.
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
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }
    int maxsum=INT_MIN;
    int maxrow=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+a[i][j];
        }
        if(sum>maxsum){
            maxsum = sum;
            maxrow = i;
        }
    }
    cout<<maxsum<<" "<<maxrow;

    return 0;

}