class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> a,b;
        vector<int> ans;
        int n = A.size();
        for(int i=0;i<n;i++){
            a[A[i]]++;
            b[B[i]]++;
            int cont=0;
            for(int j=1;j<=50;j++){
                if(a[j]==b[j] && a[j]!=0)
                    cont++;
            }
            ans.push_back(cont);
        }
        return ans;
    }
};