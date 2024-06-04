#include<iostream>
using namespace std;
// void sum(int s,int n){
//     if(n==0){
//         cout<<s;
//         return;
//     }
//     sum(s+(n%10),n/10);
// }
int sum2(int n){
    if(n==0){
        return 0;
    }
    return n%10 +sum2(n/10);
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    // sum(0,n);
    cout<<sum2(n);

    return 0;
}