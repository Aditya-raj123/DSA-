#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character";
    cin>>ch;
    if((ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') || (ch =='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
        cout<<"the given charcter is vowel";
    }
    else{
        cout<<"the given character is consonants";
    }
    return 0;
}