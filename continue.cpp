#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<n;i++){
        if(i%2==0){
            cout<<"the number is odd number";
            continue;
        }
        else{
            cout<<"the number is even number";
            break;

        }
    }
    return 0;

}