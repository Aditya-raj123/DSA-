#include<iostream>
using namespace std;
int main(){
    float principal;
    cout<<"enter the principal value";
    cin>>principal;
    float rate;
    cout<<"enter the rate value";
    cin>>rate;
    float time;
    cout<<"enter the time ";
    cin>>time;
    float simpleinterest = (principal*rate*time)/100;
    cout<<"the simple interest is given by :"<<simpleinterest; 

    return 0;

}