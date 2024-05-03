#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the first number \n";
    cin>>x;
    int y,m;
    cout<<"enter the second number and the value of m is given by :";
    cin>>y>>m;
    int z =(x*y)%m;
    cout<<"output of the code is "<<z;

    return 0;

}