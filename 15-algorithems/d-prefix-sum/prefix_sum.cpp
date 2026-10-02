#include<bits/stdc++.h>
using namespace std;

// Given an array of val design a data structure that can query the sum of a subarray of the values

class PrefixSum {
  public: 
  vector<int> prefix;
  PrefixSum(vector<int>&nums){
    int total = 0;
    for(int n : nums){
      total += n;
      prefix.push_back(total);
    }
  }

  int rangeSum(int l, int r){
    int preRight = prefix[r];
    int preLeft = left > 0 ? prefix[l - 1] : 0;
    return preRight - preLeft;
  }
};

int main() {
  return 0;
}