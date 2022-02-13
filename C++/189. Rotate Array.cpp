class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j=0;
        vector<int> ans(nums.size());
        // If k is greater than the size of the array
        if (k>=nums.size())
            k=k%nums.size();
        for (int i=nums.size()-k;i<nums.size();i++){
            ans[j]=nums[i];
            j+=1;
        }
        for (int i=j;i<nums.size();i++){
            ans[i]=nums[i-j];
        }
        nums=ans;
        
    }
};