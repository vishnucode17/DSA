class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> fmap;
        unordered_map<int,int> count;
        for(auto it:arr) fmap[it]++;
        for(auto it:fmap){
            if(count[it.second]){
                return false;
            }
            count[it.second]++;
        }
        return true;
    }
};