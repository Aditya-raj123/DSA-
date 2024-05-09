// Q1 : Write a function to print squares of first n natural numbers,
//  taking n as argument to the function
#include<iostream>
using namespace std;
int square( int num){
    return num*num;
}
void sqrt(int n){
    for(int i=1;i<=n;i++){
     cout<<i<<" "<<square(i)<<endl;;   
    }
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    sqrt(n);
    return 0;

}