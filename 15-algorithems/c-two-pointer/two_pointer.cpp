#include<bits/stdc++.h>
using namespace std;

// Given a string of char return true if it's a palindrome otherwise return false
bool isPalindrome(string word){
  int l = 0, r = word.size() - 1;
  while(l < r){
    if(word[l] != word[r]){
      return false;
    }
    l++;
    r--;
  }
  return false;
}

// Given a sorted array of integers, return the indices of two elements (in different positions) that sum up to the target value. assume there is exactly one solution
vector<int> targetSum(vector<int>&nums, int target){
  int l = 0, r = nums.size() - 1;
  while(l < r){
    if(nums[l] +  nums[r] > target){
      r--;
    } else if (nums[l] + nums[r] < target){
      l++;
    } else{
      return vector<int>{l, r};
    }
  }
}


int main() {
  return 0;
}