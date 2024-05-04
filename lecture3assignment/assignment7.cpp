#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the x and y corrdinates";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"the point is on the origin ";
    }
    else if (x==0 && y!=0){
        cout<<"the point is on the y axis";
    }
    else if (x!=0 && y==0){
        cout<<"the point is on the x axis";
    }
    else{
        cout<<"the point lies on the plane ";
    }
    return 0;

}