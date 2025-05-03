#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    bool flag = false;
    string s = "physicswallah";
    string t = "wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<true;
    }
    else cout<<false;
    return 0;

}