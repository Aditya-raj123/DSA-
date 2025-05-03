#include<iostream>
using namespace std;
void starTraingle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    starTraingle(n);
    return 0;

}