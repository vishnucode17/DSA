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
    vector<int> res;
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp=temp->next;
        }
        for (int i=0;i<res.size();i++){
            if(res[i]!=res[res.size()-1-i])
                return false;
        }
        return true;
    }
};