// Given an array of integers, change the value of all odd indexed elements
//  to its second multiple
// and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,8,5,9};
    for(int i=0;i<5;i++){
        if(i%2!=0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i]+10;
        }
        cout<<arr[i]<<" ";
        
    }
    return 0;

}