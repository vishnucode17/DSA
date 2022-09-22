class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> res;
        for(auto it:nums){
            umap[it]++;
            if(umap[it]>1){
                res.push_back(it);
            }
        }
        return res;
        
    }
};