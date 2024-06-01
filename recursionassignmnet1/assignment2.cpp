#include<iostream>
using namespace std;
int findways(int x){
    if(x<0) return 0;
    if(x==1) return 1;
    return findways(x-1)+findways(x-2)+findways(x-3);
}
int main(){
    int n;
    cout<<"enter the number of ways";
    cin>>n;
    cout<<findways(n);

    return 0;

}