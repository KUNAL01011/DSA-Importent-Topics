#include<bits/stdc++.h>
using namespace std;
// Given an array return true if there are two elements within a window of size k that are equal

bool closeDuplicates(vector<int>&nums, int k){
  unordered_set<int> window;
  int l = 0;
  for(int r = 0; r < nums.size(); r++){
    if(r - l + 1 > k){
      window.erase(nums[l]);
    }
    if(window.count(nums[r]) > 0){
      return true;
    }
    window.insert(nums[r]);
  }
  return false;
}

int main(){
  return 0;
}