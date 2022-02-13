class Solution:
    def binary_search(self,nums,target,low,high):
        if low<=high:
            mid=low+int((high-low)/2)
            if target==nums[mid]:
                return mid
            elif target>nums[mid]:
                return self.binary_search(nums,target,mid+1,high)
            elif target<nums[mid]:
                return self.binary_search(nums,target,low,mid-1)
        else:
            return -1
    def search(self, nums: List[int], target: int) -> int:
        low=0
        high=len(nums)-1
        ind=self.binary_search(nums,target,low,high)
        return ind