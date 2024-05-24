#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j * j < n; j++) {
        cout << "PhysicsWallah";
        }
        }
        // O(n * sqrt(n))
    return 0;

}
