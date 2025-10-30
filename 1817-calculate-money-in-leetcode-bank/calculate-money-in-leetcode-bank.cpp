class Solution {
public:
    int totalMoney(int n) {
        int num_of_weeks = n/7 + n%7,total=0,days;
        for(int i=0;i<num_of_weeks;i++){
            days=min(7,n);
            total+= ((days+i)*(days+i+1))/2 - (i*(i+1))/2;
            n-=days;
        }
        return total;
    }
};