class Solution {
public:
    int reverse(int x) {
        long long revNum=0;
        while(x>0|x<0){
            int ld=x%10;
            if(revNum > (INT_MAX)/10 || revNum < (INT_MIN)/10)
            {
                return 0;
            }
            revNum=(revNum*10)+ld;
            x=x/10;
        }
        return revNum;
    }
};