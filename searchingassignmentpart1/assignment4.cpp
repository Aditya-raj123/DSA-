#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,2,3,3,4};
    int n=6;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int count=0;
        int mid = lo+(hi-lo)/2;
        for(int i=0;i<n;i++){
            if(n<=mid){
                count++;
            }
            else if(count<=mid)
            lo=mid+1;
            else hi=mid-1;
        }
        cout<<lo;

    }
    

    return 0;


}