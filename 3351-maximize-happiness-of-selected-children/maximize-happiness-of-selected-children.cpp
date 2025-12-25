class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end(),greater<int>());
        long long ans=0,cont=0;
        for(auto x : happiness){
            ans=ans+max(0LL,x-cont);
            cont++;
            if(cont==k)
                break;
        }
        return ans;
    }
};