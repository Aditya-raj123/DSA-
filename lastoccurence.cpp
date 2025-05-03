#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    int x = 3;
    int idx= -1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx = i;
    //     }
    // }
    // cout<<idx;  
    for(int i=v.size();i>=0;i--){
        if(v[i]==x){
        idx = i;
        break;
        }
    }
    cout<<idx;
    return 0;
}