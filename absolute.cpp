#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    if(num>0){
        cout<<"the absolute value of the number is "<<num;
    }
    else{
        cout<<"the absolute number is given by :"<<num * (-1);;
    }
    return 0;
}