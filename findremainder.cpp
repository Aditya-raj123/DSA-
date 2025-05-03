#include<iostream>
using namespace std;
int main(){
    int a = 16;
    int b = 30;
    int q =a/b;
    int r;
    r = a -(b*q);
    cout<<r<<endl;
    // by modulos operators >> gives the remainder
    cout<<a % b;
    return 0;

}