class Solution {
public:
    int majorityElement(vector<int>& nums){
        unordered_map<int,int> umap;
        for(auto it:nums){
            if(umap[it]){
                umap[it]++;
            }
            else{
                umap[it]=1;
            }
            if (umap[it]>nums.size()/2){
                return it;
            }
        }
        return 0;
    }
};