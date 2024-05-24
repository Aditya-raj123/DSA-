#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 0;
    for(int i = 0; i < n; i++) {
    for(int j = 1; j * j < n; j *= 2) {
    c++;
    }
    }
    // So Time complexity becomes logN.

    return 0;

}