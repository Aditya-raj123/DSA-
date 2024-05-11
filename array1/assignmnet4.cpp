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
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
        if(arr[i]==arr[j]){
            flag = true;
            cout<<arr[i]<<"duplicate found"<<" "<<endl;
            // break;
        }
        }

        if(flag ==false) cout<<"duplicate not found"<<endl;
    }
    return 0;

}