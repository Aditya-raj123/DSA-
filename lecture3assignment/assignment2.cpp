#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"enter radius of the circle ";
    cin>>r;
    float area =3.14*r*r;
    float circumference= 2*3.14*r;
    if(area > circumference){
        cout<<"area is greater than the circumference of the circle "<<area;

    }
    else {
        cout<<"circumference is greater than the area of the circle "<<circumference;
        
    }
    return 0;

}