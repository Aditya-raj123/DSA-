#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the 1st sides of the triangle";
    cin>>a;
     cout<<"enter the 2nd sides of the triangle";
    cin>>b;
     cout<<"enter the 3rd sides of the triangle";
    cin>>c;
    if(a==b && b==c && c==a){
        cout<<"the given triangle is a equilteral triangle";

    }
    else if(a==b || b==c || c==a){
        cout<<"the triangle is scalene triangle";

    }
    else{
        cout<<"the triangle is a isoscles triangle ";

    }
    return 0;
    
}