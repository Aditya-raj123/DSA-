#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows and column";
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
        if(a[i][0]==0) m=0;
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                a[i][0]=0;
                a[0][j]=0;
            }
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=m-1;j>0;j--){
            if(a[i][0]==0 || a[0][j]==0){
                a[i][j]=0;
            }
        
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;

}