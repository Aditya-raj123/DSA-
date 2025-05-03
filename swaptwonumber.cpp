#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    // int temp = a ;
    // a = b;
    // b = temp;
    // cout<<a<<" "<<b;
    a =  a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;

    return 0;

}