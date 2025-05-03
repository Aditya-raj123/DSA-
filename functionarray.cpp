#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}
void change(int b[],int n){
    b[0] = 78;
}

int main(){
    int arr[5] ={1,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    display(arr,n);
    change(arr,n);
    display(arr,n);
    return 0;
}