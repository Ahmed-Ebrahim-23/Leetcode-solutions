class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = nums[0];
        vector<int> v;
        for(int i=1;i<nums.size();i++)
            v.push_back(nums[i]);
        sort(v.begin(),v.end());
        for(int i=0; i<2; i++)
            ans+=v[i];
        return ans;
    }
};