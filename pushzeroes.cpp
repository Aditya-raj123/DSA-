#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9] ={5,0,1,2,0,0,4,0,3};
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag = false;
    for(int i=0;i<8-i;i++){
        for(int j=0;j<8-i;j++){
        if(arr[j]==0){
            swap(arr[j],arr[j+1]);
        }
    }
}
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}