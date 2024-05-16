#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int sum =0;
    while(n>0){
       int x=n%10;
         if(n%2==0){
            sum = sum+x;
        
        }
    n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}
    
// int n;
// cin >> n;
// int sum = 0;
// while (n > 0) {
// int x = n % 10;
// if(n%2==0){
//     sum=sum+x;
// }
// sum=sum+x;
// sum += (x % 2 == 0 ? x : 0);
// n /= 10;
// }
// cout << sum;
// }