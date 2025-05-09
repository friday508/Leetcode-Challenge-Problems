class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* prev = nullptr;
        ListNode* fast = head;

        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }

        prev->next = slow->next;
        return head;
    }
};
