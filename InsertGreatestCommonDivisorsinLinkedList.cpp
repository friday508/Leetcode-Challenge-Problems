#include <algorithm> 
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        while (curr != nullptr && curr->next != nullptr) {
            int gcdVal = std::gcd(curr->val, curr->next->val);
            ListNode* inserted = new ListNode(gcdVal);
            inserted->next = curr->next;
            curr->next = inserted;
            curr = inserted->next;
        }
        return head;
    }
};
