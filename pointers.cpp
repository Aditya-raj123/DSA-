#include<iostream>
using namespace std;
int main(){
    int x = 40;
    int* p = &x;
    cout<<x<<endl;
    *p = 6;
    cout<<x;
    return 0;
}