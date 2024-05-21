// Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // reverse the first half
    int n=s.size();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;

    return 0;

}