#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    int m;
    cout<<"enter the number of column";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //store the transpose
    int t[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;

}