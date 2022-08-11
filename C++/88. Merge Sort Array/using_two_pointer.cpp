class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m,j=0;
        while (i!=(m+n)){
            if (nums1.size()>=i){
                nums1[i]=nums2[j];
                i++;
                j++;
            }
            else{
                nums1.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};