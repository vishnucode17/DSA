class Solution {
public:
    int reverse(int x) {
        int num=x;
        long ans=0;
        while(num!=0){
            ans=ans*10+num%10;
            num=num/10;
        }
        if(ans>INT_MAX||ans<INT_MIN)
            return 0;
        return ans;
    }
};