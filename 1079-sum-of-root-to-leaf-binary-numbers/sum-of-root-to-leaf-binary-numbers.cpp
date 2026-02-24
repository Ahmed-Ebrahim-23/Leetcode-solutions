/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* node,vector<int> v){
        if(node->left == nullptr && node->right == nullptr){
            int sum=0, depth=v.size()-1;
            for(auto x : v){
                sum+=pow(2,depth) * x;
                depth--;
            }
            return sum;
        }
        int a=0,b=0;
        if(node->left != nullptr){
            v.push_back(node->left->val);
            a = dfs(node->left, v);
            v.pop_back();
        }
        if(node->right != nullptr){
            v.push_back(node->right->val);
            b = dfs(node->right, v);
            v.pop_back();
        }
        return a+b;
    }

    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        vector<int> v;
        v.push_back(root->val);
        sum = dfs(root,v);
        return sum;
    }
};