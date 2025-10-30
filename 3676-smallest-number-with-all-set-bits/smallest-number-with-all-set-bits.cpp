class Solution {
public:
    int smallestNumber(int n) {
        int size = log2(n)+1;
        return pow(2,size)-1;
    }
};