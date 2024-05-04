#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year";
    cin>>year;
    if((year%400==0 || year%100!=0) && (year%4==0)){
        cout<<"given year is the leap year";
    }
    else {
        cout<<"given year is not a leap year";

    }
    return 0;

}