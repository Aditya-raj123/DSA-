// Write a function to count the number of digits in a number
//  and then print the square of this number.
#include<iostream>
using namespace std;
int sq(int n){
    return n*n;
}
    int countNumberOfDigits(int num) {
    int ans = 0;
    while(num > 0) {
    ans++;
    num /= 10;
     }
    return ans;
     }
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<countNumberOfDigits(n);
    return 0;

}