#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(7);
    display(v);
    cout<<endl;
    vector<int>v2(v.size());
    for(int i=0;i<v2.size();i++){
        v2[i] = v[v.size()-1-i];
    }
    display(v);
    return 0;

}