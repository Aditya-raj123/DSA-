#include<iostream>
using namespace std;
int findsum(int c,int d){
    if(c>d){
        return 0;

    }
    if(c%2==0){
        return c+findsum(c+1,d);
    }
    return c+findsum(c+2,d);
}
int main(){
    int a;
    cout<<"enter the 1st number";
    cin>>a;
    int b;
    cout<<"enter the 2nd number";
    cin>>b;
   cout<<findsum(a,b);

    return 0;

}