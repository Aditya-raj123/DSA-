#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the no of the student";
   cin>>n;
   int marks[n];
   cout<<"enter the marks of the students";
//    input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    // output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;

}