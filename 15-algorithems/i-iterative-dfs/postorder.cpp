#include<bits/stdc++.h>
using namespace std;

class TreeNode {
  public: 
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val, TreeNode* left, TreeNode* right):val(val), left(left), right(right){}
};

void preorder(TreeNode* root) {
    vector<TreeNode*> stack;
    TreeNode* curr = root;

    while (curr || stack.size()) {
        if (curr) {
            cout << curr->val << endl;
            if (curr->right) {
                stack.push_back(curr->right);
            }
            curr = curr->left;
        } else {
            curr = stack.back();
            stack.pop_back();
        }
    }
}

int main() {
  return 0;
}