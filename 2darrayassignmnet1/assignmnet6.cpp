// Q6: Write a function which accepts a 2D array of integers 
// and its size as arguments and displays the
// elements of middle row and the elements of middle column.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row/column";
    cin>>n;
    int a[n][n];
    int size=sizeof(a)/4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
    }
    int i;
    int j;
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n/2 && j==n/2){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
       
    }
       
    return 0;

}