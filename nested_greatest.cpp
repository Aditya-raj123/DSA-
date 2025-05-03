#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 1st number";
    cin>>a;
    cout<<"enter the 2nd number";
    cin>>b;
    cout<<"enter the 3rd number";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"a is the greatest"<<a;
        }
        else{
            cout<<"c is the greatest"<<c;
        }
    }
    else{
        if(b>c){
            cout<<"b is the greatest";

        }
        else{
            cout<<"c is the greatset";
        }
    }

    return 0;

}