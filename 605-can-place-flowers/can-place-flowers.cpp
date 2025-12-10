class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int a=0,cont=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==1){
                cout << cont << "\n";
                i++;
                a+=cont/2;
                cont=0;
            }
            else
                cont++;
        }
        a+=(cont+1)/2;
        return a>=n;
    }
};