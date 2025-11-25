class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int rem=0;
        for(int i=0;i<k;i++){
            rem=(rem*10 +1)%k;
            if(rem==0)
                return i+1;
        }
        return -1;
    }
};