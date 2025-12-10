class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.length(),m=str2.length();
        string ans;
        for(int i=1;i<=n;i++){
            string t = str1.substr(0,i),s;
            bool flag=true;
            if(n%i!=0 || m%i!=0)
                continue;
            for(int j=0;j<n;j+=i){
                s=str1.substr(j,i);
                if(s!=t)
                    flag=false;
            }
            for(int j=0;j<m;j+=i){
                s=str2.substr(j,i);
                if(s!=t)
                    flag=false;
            }
            if(flag)
                ans=t;
        }
        return ans;
    }
};