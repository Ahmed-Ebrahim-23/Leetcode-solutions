class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long n=nums.size(),i=0,j=0,maxi=0;
        for(int i=0;i<n;i++){
            long long goal = nums[i]*(long long)k;
            while(j!=n && nums[j] <= goal)
                j++;
            maxi = max(maxi,j-i);
            cout << i << " " << j << endl;
        }
        return n-maxi;
    }
};