class Solution {
 public:
  int maxPathSum(TreeNode* root) {
    int ans = INT_MIN;
    maxPathSumDownFrom(root, ans);
    return ans;
  }

 private:
  // Returns the maximum path sum starting from the current root, where
  // root->val is always included.
  int maxPathSumDownFrom(TreeNode* root, int& ans) {
  
