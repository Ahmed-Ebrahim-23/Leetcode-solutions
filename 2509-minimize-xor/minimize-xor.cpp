class Solution {
public:

    int what_is_bit_x(int n, int x){ 
        n = n >> x; 
        return n&1; 
    }

    int set_bit(int n,int x){
        n = n | (1LL << x);
        return n;
    }

    int reset_bit(int n,int x){
        n = n & (~(1LL << x));
        return n;
    }

    int minimizeXor(int num1, int num2) {
        int num1_setbits = __builtin_popcount(num1);
        int num2_setbits = __builtin_popcount(num2);
        int diff=abs(num1_setbits - num2_setbits);
        int x = num1;
        if(num1_setbits > num2_setbits){
            for(int i=0;i<32;i++){
                if(what_is_bit_x(x,i)==1 && diff!=0){
                    x = reset_bit(x,i);
                    diff--;
                }
            }
        }
        else{
            for(int i=0;i<31;i++){
                if(what_is_bit_x(x,i)==0 && diff!=0){
                    x = set_bit(x,i);
                    diff--;
                }
            }
        }
        return x;
    }
};