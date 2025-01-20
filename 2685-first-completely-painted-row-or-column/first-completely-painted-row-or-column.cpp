class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int,int> idx;
        for(int i=0;i<arr.size();i++){
            idx[arr[i]]=i;
        }
        int ans = INT_MAX,n=mat.size(),m=mat[0].size();
        cout << n << " " << m;
        for(int i=0;i<n;i++){
            int maxi=0;
            for(int j=0;j<m;j++){
                maxi=max(maxi,idx[mat[i][j]]);
            }
            ans=min(ans,maxi);
        }
        for(int i=0;i<m;i++){
            int maxi=0;
            for(int j=0;j<n;j++){
                maxi=max(maxi,idx[mat[j][i]]);
            }
            ans=min(ans,maxi);
        }
        return ans;
    }
};