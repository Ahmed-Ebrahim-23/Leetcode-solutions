class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size();
        vector<pair<string,string>> v;
        string valid_category[] = {"electronics", "grocery", "pharmacy", "restaurant"};
        for(int i=0;i<n;i++){
            bool flag=false;
            for(auto x : valid_category){
                if(businessLine[i] == x)
                    flag=true;
            }
            string s=code[i];
            for(int j=0;j<s.length();j++){
                if((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9') || s[j]=='_')
                    continue;
                else
                    flag=false;
            }
            if(!flag || s.empty())
                isActive[i]=false;
            if(!isActive[i])
                continue;
            v.push_back({businessLine[i],code[i]});
        }
        sort(v.begin(),v.end());
        vector<string> ans;
        for(auto x : v){
            ans.push_back(x.second);
        }
        return ans;
    }
};