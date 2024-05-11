#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the number";
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }
    cout<<sum;

    return 0;

}