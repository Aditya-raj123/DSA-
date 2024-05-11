#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x=0;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]!=x){
            cout<<x<<endl;
             flag=true;
            break;
        }
        else x++;
        
        if(flag==false) cout<<x<<endl;
    }
    return 0;

}