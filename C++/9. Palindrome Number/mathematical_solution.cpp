class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        int num=x;
        while (num!=0){
            ans=(ans*10)+num%10;
            num=num/10;
        }
        if (ans==x && x>=0)
            return true;
        else
            return false;
        
    }
};