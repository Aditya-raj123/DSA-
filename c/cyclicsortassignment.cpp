// You have a set of integers s , which originally contains all the numbers from 1 to n .
// Unfortunately, due to some error, one of the numbers in s got duplicated to another number
// in the set, which results in repetition of one number and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form
// of an array.
#include<iostream>
#include<vector>
using namespace std;
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        //  int cidx=nums[i]-1;
        for(int i=0;i<n;i++){
            while(nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]){
                return {nums[i],i+1};
            }
        }
        return {};
       
    }
int main(){
    int arr[]={1,2,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>b;
    findErrorNums(b);
    return 0;

}
