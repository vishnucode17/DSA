/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> add;
        while(head!=NULL){
           if (add.find(head) != add.end())
            return true;
            add.insert(head);
            head=head->next;
            
        }
        return false;
    }
};