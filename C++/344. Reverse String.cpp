// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

//Solution:

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans(s.size());
        int begin=0,end=s.size()-1,temp;
        for (int i=0;i<s.size();i++){
            ans[i]=s[s.size()-1-i];
        }
        s=ans;
    }
};

//Efficient Solution:

class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin=0,end=s.size()-1,temp;
        while(begin<end){
            temp=s[begin];
            s[begin]=s[end];
            s[end]=temp;
            begin++;
            end--;
        }
        
        
    }
};