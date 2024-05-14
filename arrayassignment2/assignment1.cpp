#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int a[n];
    cout<<"enter the element of the array";
        for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"enter the target";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            count++;
        }
    }
    cout<<count;
    return 0;

}