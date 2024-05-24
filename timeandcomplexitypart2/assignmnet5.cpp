#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 0;
    for(int i = 1; i < n; i*=2) {
    for(int j = n; j > i; j--) {
    c++;
    }
    }
    return 0;
    // ~ O(nlogn)

}