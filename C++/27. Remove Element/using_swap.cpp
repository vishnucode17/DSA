class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length=nums.size();
        int count=0;
        for(int i=0;i<length;i++){
            if (nums[i]!=val){
                swap(nums[i],nums[count]);
                count++;
                cout<<count;
            }
        }
        return count;
    }
};