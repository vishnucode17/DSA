class Solution {
    private:
    string reverse_string(string s, int low, int high){
        char temp;
        while (low<high){
            temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;
            high--;
        }
        return s;
    } 
public:
    string reverseWords(string s) {
        int low=0,high;
        for (int i=0;i<=s.length();i++){
            if (s[i]==' ' || i==s.length()){
                high=i-1;
                s=reverse_string(s,low,high);
                low=i+1;
            }
        }
        
        return s;
    }
};