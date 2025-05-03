#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if (n%5==0){
        if(n%3==0){
            cout<<"the number is divsible by 5 and 3";
        }
        else{
            cout<<"the number is divsible by 5 but not 3";
        }
    }
    else{
        cout<<"not matching condition";
    }
    return 0;

}