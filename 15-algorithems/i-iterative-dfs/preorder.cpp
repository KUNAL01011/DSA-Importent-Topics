#include<bits/stdc++.h>
using namespace std;

class TreeNode {
  public: 
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int val, TreeNode* left, TreeNode* right):val(val), left(left), right(right){}
};

void postorder(TreeNode* root) {
    vector<TreeNode*> stack = {root};
    vector<bool> visit = {false};

    while (stack.size()) {
        TreeNode* curr = stack.back();
        bool visited = visit.back();
        stack.pop_back();
        visit.pop_back();
        if (curr) {
            if (visited) {
                cout << curr->val << endl;
            } else {
                stack.push_back(curr);
                visit.push_back(true);
                stack.push_back(curr->right);
                visit.push_back(false);
                stack.push_back(curr->left);
                visit.push_back(false);
            }
        }
    }
}


int main() {
  return 0;
}