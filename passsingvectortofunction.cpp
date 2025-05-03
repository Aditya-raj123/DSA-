#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void change(vector<int>&v){
    v[0] = 90;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    v.push_back(5);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    change(v);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }


    return 0;

}