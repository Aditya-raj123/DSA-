#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,4,1};
    int n=4;
    int k=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // selection sort upto k
    for(int i=0;i<k;i++){
        int min=arr[i];
        int mindx=i;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mindx=j;

            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<k;
    return 0;

}