class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* currNode = head;
        ListNode* nextNode = NULL;
        ListNode* prevNode = NULL;

        while(currNode != NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }

        return prevNode;
    }
};