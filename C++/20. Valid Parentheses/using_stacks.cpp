class Solution {
public:
    bool isValid(string s) {
        stack<char> op;
        for (auto it:s){
            if (it=='(' || it=='[' || it=='{')
                op.push(it);
            else{
                if(!op.empty()){
                    if ((it==')' && op.top()=='(') || (it==']' && op.top()=='[') || (it=='}' && op.top()=='{'))
                    op.pop();
                else
                    return false;
                }
                else{
                    return false;
                }
            }
        }
        if(!op.empty()){
            return false;
        } 
        return true;
    }
};