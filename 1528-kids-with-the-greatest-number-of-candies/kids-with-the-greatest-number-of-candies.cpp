class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=0;
        vector<bool> ans;
        for(auto x : candies)
            maxi=max(maxi,x);
        for(auto x : candies)
            ans.push_back(x + extraCandies >= maxi);
        return ans;
    }
};