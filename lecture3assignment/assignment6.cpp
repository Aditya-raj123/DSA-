#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the a marks";
    cin>>a;
    cout<<"enter the  b marks ";
    cin>>b;
    cout<<"enter the c marks";
    cin>>c;
    if(a<=b && a<=c){
        cout<<"a is the least marks"<<a;
    }
    else if(b<=a && b<=c ){
        cout<<"b is the least marks"<<b;
    }
    else{
        cout<<"c is the least marks"<<c;
    }
    return 0;

}