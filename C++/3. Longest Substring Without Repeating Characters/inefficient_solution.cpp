class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0,next=low,res=0,res_max=0;
        unordered_map<char,int> umap;
        while(next!=s.length()){
            umap[s[next]]++;
            res++;
            if (umap[s[next]]>1){
                umap.clear();
                res=0;
                low+=1;
                next=low-1;
            }
            if(res>res_max)
                res_max=res;
            next++;
            
        }
        return res_max;
    }
};