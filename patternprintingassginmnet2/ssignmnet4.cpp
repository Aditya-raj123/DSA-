#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    // stars in the upper line
    for(int i=1;i<=2*n-1;i++){
        cout<<(char)(i+64);
    }
    cout<<endl;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=m;i++){
        // stars
        for(int j=1;j<=m+1-i;j++){
            cout<<(char)(j+64);
        }
        // spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        // stars
        for(int l=1;l<=m+1-i;l++){
            cout<<(char)(l+64);
        }
         cout<<endl;
    }
    // cout<<endl;
    return 0;

}