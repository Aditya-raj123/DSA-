#include<iostream>
using namespace std;
int prod;
int *ptrans = &prod;
void product(int* ptr1,int* ptr2){
    *ptrans =  (*ptr1 * *ptr2);
    return;
}

int main(){
    // Q1 : Write a program to find the product of two numbers using pointers.
    int a;
    cout<<"enter the first number";
    cin>>a;
    int b;
    cout<<"enter the second number";
    cin>>b;
    int* ptr1 = &a;
    int* ptr2 = &b;
    product(ptr1,ptr2);
    cout<<*ptrans;
    return 0;

}