// Find the difference between the sum of 
// elements at even indices to the sum of elements at odd indices.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,5,6,8,9};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<5;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else if(i%2!=0){
            sumodd=sumodd+arr[i];
        }
    }
    int diff=sumeven-sumodd;
    cout<<diff<<endl;
    return 0;

}