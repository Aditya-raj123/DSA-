#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,5,6,7,8};
    for(int i=1;i<5;i++){
        if(arr[i-1]>arr[i]){
            cout<<"not sorted"<<endl;
             return 0;
        }
    }
            cout<<"sorted";
             return 0;
    }
 



