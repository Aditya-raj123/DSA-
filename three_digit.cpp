#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if (n>=100 && n<999){
        cout<<"the given number is 3 digit number";
    }
    else{
        cout<<"the given number is not 3 digit number";
    }
    return 0;
}