class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;

        while (l1 || l2) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newnode = new ListNode(digit);

            if (l3 == nullptr) {
                l3 = newnode;
                tail = newnode;
            } else {
                tail->next = newnode;
                tail = newnode;
            }
        }

        if (carry) {
            tail->next = new ListNode(carry);
        }

        return l3;
    }
};