class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2,ans=0;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            if(x.second==n)
                ans=x.first;
        }
        return ans;
    }
};