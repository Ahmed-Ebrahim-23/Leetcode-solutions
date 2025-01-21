class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long n = grid[0].size();
        vector<long long> r1(n+1,0),r2(n+1,0);
        for(int i=0;i<n;i++){
            r1[i+1]=r1[i]+grid[0][i];
            r2[i+1]=r2[i]+grid[1][i];
        }
        long long idx=0,maxi=0,rem=LLONG_MAX;
        for(int i=0;i<n;i++){
            rem=min(rem,max(r1[n]-r1[i+1],r2[i]));
        }
        return rem; 
    }
};