#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of sides";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // my way
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
