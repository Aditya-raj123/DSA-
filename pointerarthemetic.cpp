#include<iostream>
using namespace std;
int main(){
    int x = 4;
    x++;
    cout<<x<<endl;
    int* p = &x;
    p = p+1;
    cout<<p;
    return 0;
    
}