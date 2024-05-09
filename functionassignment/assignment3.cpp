#include<iostream>
using namespace std;
void odd(int a,int b){
    if(a>b){
        odd(a,b);
        return ;
    }
    for(int i=a;i<=b;i++){
        if(i%2!=0)
        cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
    int a;
    cout<<"enter the 1st number";
    cin>>a;
    int b;
    cout<<"enter the 2nd number";
    cin>>b;
    odd(a,b);
    return 0;

}