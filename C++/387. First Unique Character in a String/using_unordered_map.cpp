class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> umap;
        for (auto it:s)
              umap[it]++;
        
        for(int i=0;i<s.length();i++){
            if(umap[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};