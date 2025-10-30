class Solution {
public:
    int totalMoney(int n) {
        int num_of_weeks = ceil(n/7.0),total=0,days;
        for(int i=0;i<num_of_weeks;i++){
            days=min(7,n);
            cout << days;
            total+= ((days+i)*(days+i+1))/2 - (i*(i+1))/2;
            n-=days;
        }
        return total;
    }
};