#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number";
    cin>>num;
    if(num % 2 == 0){
        cout<<"the given number is even number : "<< num;
    }
    else{
        cout<<"the given number is odd number : "<< num;
    }
    return 0;
}