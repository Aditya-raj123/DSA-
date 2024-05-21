// Input a string of length less than 10 and convert it into integer 
// without using builtin function.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    return 0;

}
