#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 1st side";
    cin>>a;
    cout<<"enter the 2nd side";
    cin>>b;
    cout<<"enter the 3rd side";
    cin>>c;
    if(a+b>c){
        cout<<"yes it can form the triangle";
    }
    else if(b+c>a){
        cout<<"yes it can form the triangle ";
    }
    else if(a+c>b){
         cout<<"yes it can form the triangle ";
    }
    else {
        cout<<"invalid traingle";
    }
    
    return 0;

}