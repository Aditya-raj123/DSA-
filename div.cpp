#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if((n%5==0 || n%3==0) && (n%15!=0)){
        cout<<"the number is divsible by 5 and 3 but not by 15";
    }
    else {
        cout<<"not matching the condition";
    }
    
    return 0;

}