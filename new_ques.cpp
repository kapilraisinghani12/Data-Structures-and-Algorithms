#include<iostream>
#include <bits/stdc++.h>

using namespace std;
 int getPivot(vector<int>& nums){
       int n = nums.size();
       int s = 0;
       int e = n-1;
       int m = (s+e)/2;
       while(s>e){
           if(nums[m]>=nums[0]){
               s = m + 1;
           }
           else{
               e = m;
           }
           m = (s+e)/2;

       }
           return s;

    }
    bool check(vector<int>& nums) {
        int n = nums.size();
        int p = getPivot(nums);
        int k = n - p;
        vector<int> temp(nums.size());
        int i;
        for(i = 0; i< nums.size(); i++){
            temp[(i+k)%nums.size()]=nums[i];

        }
        sort(nums.begin(), nums.end());
        int j;
        int count = 0;
        for(j = 0; j<n; j++){
            if(nums[i]==temp[i]){
                count++;
            }
        }
        if(count==n){
            return true;
        }
        else{
            return false;
        }
    }
    int main(){
        vector<int> nums = {4,5,1,2,3};
        return check(nums);
    }