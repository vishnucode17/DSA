class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        if(nums.size()==1){
            if(nums[0]==target)
                return 0;
            return -1;
        }
        while(nums[i]<=nums[i+1] && nums.size()-1>i+1){
            i++;
        }
        int low=0,high=i,mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
       
        low=i+1,high=nums.size()-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
};