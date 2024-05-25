#include<iostream>
#include<string>
using namespace std;
int main(){
     int arr[5]={5,1,3,4,2};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    for(int i=0;i<n;i++){
        // traveres
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
    
        if(flag==true) 
        break;
        
    }

        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
          
        }
    return 0;

}