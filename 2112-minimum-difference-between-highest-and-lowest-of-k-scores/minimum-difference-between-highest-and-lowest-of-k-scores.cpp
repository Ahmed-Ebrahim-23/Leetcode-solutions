class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(), greater<int>());
        int diff=0,ans=INT_MAX;

        for(int i=0;i<=nums.size()-k;i++){
            diff = nums[i] - nums[i+k-1];
            ans=min(ans,diff);
        }

        return ans;
    }
};