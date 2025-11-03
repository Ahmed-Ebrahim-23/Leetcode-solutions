class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size(),maxi=0,total=0,ans=0;
        for(int i=0;i<n-1;i++){
            if(colors[i]!=colors[i+1]){
                ans+=total-maxi; 
                total=0;
                maxi=0;
                continue;
            }
            if(colors[i]==colors[i+1] & total==0){
                total+=neededTime[i]+neededTime[i+1];
                maxi=max(neededTime[i],neededTime[i+1]);
            }
            else{
                total+=neededTime[i+1];
                maxi=max(maxi,neededTime[i+1]);
            }
        }
        return ans + total-maxi;
    }
};