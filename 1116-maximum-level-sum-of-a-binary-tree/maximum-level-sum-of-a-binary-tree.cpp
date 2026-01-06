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
    int maxLevelSum(TreeNode* root) {
        int ans=0,max_sum=INT_MIN,level=0,level_sum=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            level++;
            level_sum=0;
            int level_size = q.size();
            for(int i=0;i<level_size;i++){
                TreeNode* node = q.front();
                level_sum+=node->val;
                q.pop();
                if(node->left != nullptr)
                    q.push(node->left);
                if(node->right != nullptr)
                    q.push(node->right);
            }
            if(max_sum < level_sum)
                ans=level;
            max_sum = max(max_sum, level_sum);
        }
        return ans;
    }
};