#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,0,2,1,3,6,7};
    int n=7;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    //  storing the sorted array into integer
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    cout<<x<<endl;
    // for second minimum are need to change the sorted array
    for(int i=n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // making the second minimun array into integer
      int y=0;
    for(int i=0;i<n;i++){
        y*=10;
        y+=arr[i];
    }
    cout<<y<<endl;

    cout<<"minimum sum of the array is :"<<x+y<<endl;


    
   
    return 0;

}