class Solution {
public:
    bool checkString(string s) {
        bool flag = false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='b')
                flag = true;
            if(s[i]=='a' && flag)
                return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna