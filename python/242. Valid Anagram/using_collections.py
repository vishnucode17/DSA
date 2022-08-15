class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
        count = collections.Counter(s)
        for ind,ch in enumerate(t):
            if count[ch]==0 or ch not in count.keys():
                return False
            else:
                count[ch]-=1
        return True
        