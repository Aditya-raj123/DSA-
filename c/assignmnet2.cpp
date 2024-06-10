#include<iostream>
#include<vector>
using namespace std;
  vector<int> findDuplicates(vector<int>& nums) {
        int n= nums.size();
        int i=0;
       for(int i=0;i<n;i++){
        while(nums[i]!=nums[nums[i]-1]){
            swap(nums[i],nums[nums[i]-1]);
        }
       }
       vector<int>b;
       for(int i=0;i<n;i++){
        if(i+1!=nums[i]) b.push_back (nums[i]);
       }
       return b;
    }
int  main(){
    int arr[2,3,4,5];
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findDuplicates(arr);


    return 0;

}