class Solution {
    unordered_map <int,int> fmap;
public:
    int fib(int n) {
        int a,b;
        if (n<2)
            return n;
        if (fmap[n-1]){
            a=fmap[n-1];
        }
        else{
            a=fib(n-1);
            fmap[n-1]=a;
        }
        if(fmap[n-2]){
            b=fmap[n-2];
        }
        else{
            b=fib(n-2);
            fmap[n-2]=b;
        }
        return a+b;
    }
};