class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=NULL || fast->next != NULL){
            if(fast == slow){
                return true;
            }

            slow = slow->next;
            fast = fast->next->next;
        }

        return false;
    }
};