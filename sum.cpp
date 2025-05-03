#include<iostream>
using namespace std;
int sum(int x,int y){
    return x+y;
}

int main(){
    int x;
    cout<<"enter the 1st number";
    cin>>x;
    int y;
    cout<<"enter the 2nd number";
    cin>>y;
    cout<<sum(x,y);
}

