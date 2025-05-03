#include<iostream>
using namespace std;
void fun(int x = 0,int y = 2,int z = 7,int a =67){
    cout<<x<<" "<<y<<" "<<z<<" "<<a;
}
// if we are giving the default value we have to give the default value to all
int main(){
    fun(2,3,4,5);
    return 0;
}