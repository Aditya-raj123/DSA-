#include<iostream>
using namespace std;
int main(){
   int arr[10]={0,0,0,0,0,0,0,0,0,0};
   int n=10;
   int x=1;
   int lo=0;
   int hi=n-1;
   int firstidx= - 1;
   while(lo<=hi){
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==x){
        if(mid==0){
            firstidx=mid;
             break;
        }
        else if(arr[mid-1]!=x){
             firstidx=mid;
              break;
        }
        else hi=mid-1;
    }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
   }
   if(firstidx==-1) cout<<0;
   else cout<<n-firstidx;

    return 0;

}
