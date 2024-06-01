#include<iostream>
using namespace std;
bool twopower(int x){
    if(x==1 || x==0){
        return true;
    }
    if(x%2==0){
        return twopower(x/2);
    }
    else return false;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<twopower(n);
    return 0;

}