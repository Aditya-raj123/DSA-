#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(v[i]>v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}