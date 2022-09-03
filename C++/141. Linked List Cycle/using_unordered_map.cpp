class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> add;
        while(head!=NULL){
            if(!add[head]){
                add[head]=1;
            }
            else{
                add[head]++;
            }
            if (add[head]>1)
                return true;
            head=head->next;
            
        }
        return false;
    }
};