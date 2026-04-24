class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length(),contL=0,contR=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L')
                contL++;
            else if(moves[i]=='R')
                contR++;
        }
        int wild = n - (contL+contR);
        return wild + max(contL,contR) - min(contL,contR);
    }
};