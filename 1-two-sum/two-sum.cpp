class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[numbers[i]]=i;
        }
        for(int i=0;i<n;i++){
            int x = target - numbers[i];
            if(m[x]!=0 && m[x]!=i)
                return {i,m[x]};
        }
        return {};
    }
};