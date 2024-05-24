#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 0;
        for(int i = n; i > 0; i /= 2) {
        c++;
        }
        // O(logN), because each time n gets divided by 2 in each iteration, 
        // so in total


    return 0;

}