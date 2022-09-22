class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        vector<int> freq(nums.size(),0);
        for(auto it:nums){
            freq[it-1]++;
            if(freq[it-1]>1)
                ans.push_back(it);
        }
        return ans;
    }
};