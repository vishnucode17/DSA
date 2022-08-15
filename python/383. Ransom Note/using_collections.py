class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        count=collections.Counter(magazine)
        for ind,ch in enumerate(ransomNote):
            if count[ch]==0 or ch not in count.keys():
                return False
            else:
                count[ch]-=1
            
        return True
        