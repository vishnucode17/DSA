class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> umap;
        for (int i=0;i<nums1.size();i++)
            umap[nums1[i]]+=1;
        for (int j=0;j<nums2.size();j++){
            if(umap[nums2[j]]){
                res.push_back(nums2[j]);
                umap[nums2[j]]-=1;
            }
        }
        
        return res;
        
    }
};

