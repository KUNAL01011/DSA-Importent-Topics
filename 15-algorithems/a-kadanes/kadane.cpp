#include<bits/stdc++.h>
using namespace std;

// Find a non - empty subarray with the largest sum
int solve(vector<int>&nums){
  int maxSum = nums[0];
  int currSum = 0;

  for(int n : nums){
    currSum = max(currSum, 0);
    currSum += n;
    maxSum = max(maxSum, currSum);
  }
  return maxSum;
}

int main() {
  return 0;
}