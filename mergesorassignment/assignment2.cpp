// Reverse Pairs (Leetcode Problem) : 
// Given an integer array nums, return the number of reverse
// pairs in the array.
// A reverse pair is a pair (i, j) where:
// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].
#include<iostream>
#include<vector>
using namespace std;
int inversion(vector<int>&a,vector<int>&b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
            count+=(a.size()-i);
            j++;
        }
        else {
            i++;
        }
    }
    return count;

}
void merge(vector<int>&a,vector<int>&b,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            v[k++]=a[i++];
        }
        else {
            v[k++]=b[j++];
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            v[k++]=b[j++];   
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            v[k++]=a[i++];
        }
    }
}

int mergesort(vector<int>&v){
    int count=0;
    int n=v.size();
    if(n==1) return 0;
    int n1=n/2,n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
     for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    count +=mergesort(a);
    count +=mergesort(b);
    // count the inversion 
    count+= inversion(a,b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
    return count;

}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   cout<<mergesort(v);
   
    return 0;

}
