#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter the 1st number";
    cin>>num1;
    cout<<"enter the 2nd number";
    cin>>num2;
    cout<<"enter the 3rd number";
    cin>>num3;
    if (num1>num2 && num1>num3){
        cout<<"the greatest number is :"<<num1;
    }
    else if (num2>num1 && num2>num3){
        cout<<"the greatest number is :"<<num2;
        
    }
    else{
        cout<<"the greatest number is :"<<num3;
    }
    return 0;
}