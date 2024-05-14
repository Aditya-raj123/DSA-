#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,5,6,4,1,5,1};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(i==j)
            continue;
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<arr[i];
            break;
        }
    }
    return 0;

}