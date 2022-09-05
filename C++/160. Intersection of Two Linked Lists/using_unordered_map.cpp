class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_map<ListNode*,int> smap;
    while(headA!=NULL){
        smap[headA]=headA->val;
        headA=headA->next;
    }
    while(headB!=NULL){
        if (smap[headB]){
            return headB;
        }
        headB=headB->next;
    }
    return 0;
    }
};