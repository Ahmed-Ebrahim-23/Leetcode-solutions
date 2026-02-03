class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size(),i=0;
        while(i<n-1 && nums[i+1] > nums[i])
            i++;
        int p=i;
        while(i<n-1 && nums[i+1] < nums[i])
            i++;
        int q=i;
        while(i<n-1 && nums[i+1] > nums[i])
            i++;
        int end=i;
        cout << p << " " << q << " " << end;
        return (p!=0) && (q!=p) && (end==n-1) && (end!=q)?true:false;
    }
};