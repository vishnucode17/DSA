class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length()==0)
            return 0;
        if(haystack.find(needle)==string::npos){
            return -1;
        };
        return haystack.find(needle);
    }
};