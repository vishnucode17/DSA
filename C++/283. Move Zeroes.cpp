// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int length=nums.size();
        int c=0;
        for (int i=0;i<length;i++){
            if (nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
            else{
                c++;
            }
        }
        for (int i=0;i<c;i++){
            nums[j]=0;
            j++;
        }
    }
};