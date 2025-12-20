class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size(),m=strs[0].length(),ans=0;
        for(int i=0;i<m;i++){
            char c = strs[0][i];
            for(int j=0;j<n;j++){
                if(c > strs[j][i]){
                    ans++;
                    break;
                }
                c = strs[j][i];
            }
        }
        return ans;
    }
};