class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,next=-1,res=0;
        unordered_map<char,int> umap;
        while(low<s.length()){
            if(next+1<s.length() && umap[s[next+1]]==0)
                umap[s[++next]]++;
            else
                umap[s[low++]]--;
            res=max(next-low+1,res);
        }
        return res;
    }
};