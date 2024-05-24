#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 0;
    for(int i = 0; i < n; i++) {
    for(int j = 0; j < i; j++){
    c++;
    }
    }
    // O(n^2) as this is a nested loop 
    // where the jth loop is begin traversed exactly
    return 0;

}