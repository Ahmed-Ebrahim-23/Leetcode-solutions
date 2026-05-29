class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size(),sum=0,mini=INT_MAX;
        for(int i=0;i<n;i++){
            while(nums[i]){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            mini=min(sum,mini);
            sum=0;
        }
        return mini;
    }
};