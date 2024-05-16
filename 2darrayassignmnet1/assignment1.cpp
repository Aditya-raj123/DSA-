// Write a program to store 10 at every index 
// of a 2D matrix with 5 rows and 5 columns.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row";
    cin>>n;
    int m;
    cout<<"enter the number of column";
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
