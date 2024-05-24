#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 0;
    for(int i = n; i > 0; i /= 2) {
    for(int j = 0; j < i; j ++) {
    c++;
    }
    }

    // So time complexity becomes O(2n) ~ O(n)

    return 0;

}