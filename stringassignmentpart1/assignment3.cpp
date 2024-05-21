#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    bool flag=true;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(s[i]!=s[j]) flag=false;
        i++;
        j--;
    }
    if(flag==false) cout<<"the given string is not the palindrome ";
    else cout<<"palindrome";
    return 0;

}