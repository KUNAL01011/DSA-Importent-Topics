#include<bits/stdc++.h>
using namespace std;

class TreeNode {
  public: 
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val, TreeNode* left, TreeNode* right):val(val), left(left), right(right){}
};


void inorder(TreeNode* root) {
    vector<TreeNode*> stack;
    TreeNode* curr = root;

    while (curr || stack.size()) {
        if (curr) {
            stack.push_back(curr);
            curr = curr->left;
        } else {
            curr = stack.back();
            stack.pop_back();
            cout << curr->val << endl;
            curr = curr->right;
        }
    }
}

int main() {
  return 0;
}