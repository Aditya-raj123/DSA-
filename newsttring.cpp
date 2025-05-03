#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "aditya";
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(i%2==0) s[i] = 'a';
    }
    cout<<s<<endl;
    return 0;

}