#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c = 0;
        for(int i = n; i > 1; i /= i) {
        c++;
        }

        // O(1), because the loop will only be iterated once.
        //  After one iteration ‘i’ will
        // become 1 from n and the loop will break.
    return 0;

}