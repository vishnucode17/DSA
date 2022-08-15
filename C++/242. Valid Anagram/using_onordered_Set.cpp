class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;
        if(s.length()!=t.length())
            return false;
        for(auto it:s){
            umap[it]++;
        }
        for(auto it:t){
            if(!umap[it] || umap[it]==0)
                return false;
            else
                umap[it]--;
        }
        return true;
    }
};