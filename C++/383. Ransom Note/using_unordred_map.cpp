class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> umap;
        for(auto it:magazine)
            umap[it]+=1;
        
        for(auto it:ransomNote){
            if(!umap[it] || umap[it]==0)
                return false;
            else{
                umap[it]--;
            }
        }
        return true;
    }
};

