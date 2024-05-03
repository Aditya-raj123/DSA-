#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the first character";
    cin>>a;
    char b;
    cout<<"enter the second character";
    cin>>b;
    int c=(int)a;
    int d=(int)b;
    int e=d-c;
    cout<<"the difference between the two ascii value is"<<e;
    return 0;

}