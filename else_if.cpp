#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter the number";
    cin>>marks;
    if(marks >=91){
        cout<<"excellent";
    }
    else if (marks>=81){
        cout<<"very good";

    }
    else if(marks >= 71){
        cout<<"good";

    }
    else if(marks >=61){
        cout<<"average";

    }
    else if (marks >=40){
        cout<<"improve";
    }
    
    else{
        cout<<"fail";
    }


    return 0;
}