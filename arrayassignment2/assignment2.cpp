// WAP to find the largest three elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={34,56,12,7,89};
    int max3,max2,max1= arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if (arr[i]>max1){
            max1=arr[i];
        }
    }
    cout<<"the three largest element is"<<max3<<" "<<max2<<" "<<max1<<endl;
    return 0;

}