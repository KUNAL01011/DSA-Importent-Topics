#include<bits/stdc++.h>
using namespace std;

class SegmentTree {
  public:
    int sum;
    SegmentTree* left;
    SegmentTree* right;
    int L;
    int R;

    SegmentTree(int total, int L, int R){
      this->sum = total;
      this->L = L, this->R = R;
      this->left = nullptr;
      this->right = nullptr;
    }

    static SegmentTree* build(vector<int>&nums, int L, int R){
      if(L == R) return new SegmentTree(nums[L], L, R);

      int M = (L+R) / 2;
      SegmentTree *root = new SegmentTree(0, L, R);
      root->left = SegmentTree::build(nums, L, M);
      root->right = SegmentTree::build(nums, M+1, R);
      root->sum = root->left->sum + root->right->sum;
      return root;
    }

    void update(int index, int val){
      if(this->L == this->R) {
        this->sum = val;
        return;
      }

      int M = (this->L + this->R) / 2;
      if(index > M) this->right->update(index, val);
      else this->left->update(index, val);

      this->sum = this->left->sum + this->right->sum;
    }

    int rangeQuery(int L, int R){
      if(L == this->L && R == this->R){
        return this->sum;
      }

      int M = (this->L + this->R) / 2;
      if(L > M) {
        return this->right->rangeQuery(L, R);

      } else if(R <= M){
        return this->left->rangeQuery(L,R);
      } else {
        return (this->left->rangeQuery(L, M) + this->right->rangeQuery(M+1, R));
      }
    }
};

int main() {
  return 0;
}