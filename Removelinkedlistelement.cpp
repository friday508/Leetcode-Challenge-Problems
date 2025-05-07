class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while (head) {
            if (head->val != val) {
                prev->next = head;
                prev = prev->next;
            }
            head = head->next;
        }

        prev->next = nullptr;
        return dummy->next;
    }
};
