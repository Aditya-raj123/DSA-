#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int c = 0;
    for(int i = 1; i < n; i *= 2) {
    c++;
    }
    // O(logN) as the loop will be iterated log2N times. 
    return 0;

}