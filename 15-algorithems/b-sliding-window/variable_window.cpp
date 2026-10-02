#include<bits/stdc++.h>
using namespace std;

// Find the length of longest subarray with the some value in each position
int longestSubarray(vector<int>&nums){
  int len = 0;
  int l = 0;

  for(int r = 0; r < nums.size(); r++){
    if(nums[l] != nums[r]){
      l = r;
    }
    len = max(len, r-l+1);
    
  }
  return len;
}

// Find len of minimum size subarray where the sum is greater than or equal to the target
int shortestSubarray(vector<int>&nums, int target){
  int l = 0, total = 0;
  int len = INT_MAX;

  for(int r = 0; r < nums.size(); r++){
    total += nums[r];
    while(total >= target){
      len = min(r - l + 1, len);
      total -= nums[l];
      l++;
    }
  }
  if(len == INT_MAX){
    return 0;
  }
  return len;
}

int main(){
  return 0;
}