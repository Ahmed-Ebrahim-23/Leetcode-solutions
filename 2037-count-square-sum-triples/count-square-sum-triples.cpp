class Solution {
public:
    int countTriples(int n) {
        int ans=0;
        double c=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                c = sqrt(i*i + j*j);
                if(c <= n && ceil(c)==floor(c))
                    ans++;
            }
        }
        return ans;
    }
};