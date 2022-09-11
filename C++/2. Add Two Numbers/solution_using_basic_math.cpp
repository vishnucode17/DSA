/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,l,r;
        ListNode* ans= new ListNode();
        ListNode*temp=ans;
        while(l1 || l2){
            if (!l1){
                l=0;
            }
            else{
                l=l1->val;
            }
            if (!l2){
                r=0;
            }
            else{
                r=l2->val;
            }
            temp->next=new ListNode((l+r+carry)%10);
            carry=(l+r+carry)/10;
            temp=temp->next;
            if (l1)
                l1=l1->next;
            if (l2)
                l2=l2->next;
            
        }
        if (carry>0){
            temp->next=new ListNode(carry);
            temp=temp->next;
        }
        return ans->next;
    }
};