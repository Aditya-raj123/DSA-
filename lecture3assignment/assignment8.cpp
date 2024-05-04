#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3,slope1,slope2;
    cout<<"enter x1";
    cin>>x1;
    cout<<"enter x2";
    cin>>x2;
     cout<<"enter x3";
    cin>>x3;
     cout<<"enter y1";
    cin>>y1;
     cout<<"enter y2";
    cin>>y2;
     cout<<"enter y3";
    cin>>y3;
    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);

    if(slope1==slope2){
        cout<<"all 3 points lies on the same lines ";

    }
    else{
        cout<<"all 3 points not lies on the same lines";
    }
    return 0;

}