#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the char";
    cin>>ch;
    if ((int(ch) >= 97 && int(ch)<=122) ||  ((int(ch) >= 65 && int(ch)<=90)) ){
        cout<<"the given character is an alphabet :"<<ch;
    }
    else{
        cout<<"the given character is not an alphabet: " <<ch;
    }
    return 0;

}