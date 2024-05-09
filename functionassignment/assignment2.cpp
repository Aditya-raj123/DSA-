#include<iostream>
using namespace std;
float area(float x){
    float cir;
    cir=3.14*x*x;
    return cir;
}

int main(){
    float radius;
    cout<<"enter the radius";
    cin>>radius;
    cout<<area(radius);
    return 0;

}