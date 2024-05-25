#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s= "AZYZXBYDXJK";
    string str= "";
    int n=s.size();
    for(int i=0;i<s.size();i++){
        if(s[i] >= 'X'){
            str.push_back(s[i]);
        }
    }
    for(int i=0;i<n-1;i++){
        // traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(str[j] > str[j+1]){
            swap(str[j],str[j+1]);
            flag = false;
        }
        }
        if(flag==true){
        break;
    }
    }
    // sort (str.begin(),str.end());
    // cout<<str;
    return 0;

}