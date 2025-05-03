#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(90);
    v.push_back(49);
    v.push_back(9);
    v.push_back(19);
    v.push_back(29);
    cout<<v.size();
    cout<<endl;
    cout<<v.capacity();
    return 0;
}