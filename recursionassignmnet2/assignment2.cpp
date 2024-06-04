// Print index of a given element in an array. If not present, print -1.
#include<iostream>
using namespace std;
int index(int arr[],int n,int idx,int k){
    if(idx==n){
        return -1;
    }
    if(arr[idx]==k) return 1;
    index(arr,n,idx+1,k);
   
}
int main(){
    int arr[5]={4,7,2,9,0};
    int n=sizeof(arr)/4;
    int k=6780;
    cout<<index(arr,n,0,k);
    return 0;
}