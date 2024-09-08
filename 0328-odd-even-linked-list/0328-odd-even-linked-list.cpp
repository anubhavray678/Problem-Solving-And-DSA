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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        vector<int> list;
        ListNode* curr = head;
        while (curr != NULL) {
            list.push_back(curr->val);
            curr = curr->next;
        }
        curr = head;
        if (list.size() > 1) {
            ListNode* odd = new ListNode(list[0]);
            ListNode* oddCurr = odd;

            ListNode* even = new ListNode(list[1]);
            ListNode* evenCurr = even;

            int len = list.size();
            for (int i = 2; i < len; i = i + 2) {
                ListNode* temp = new ListNode(list[i]);
                oddCurr->next = temp;
                oddCurr = oddCurr->next;
            }
            for (int i = 1; i < len; i = i + 2) {
                ListNode* temp = new ListNode(list[i]);
                evenCurr->next = temp;
                evenCurr = evenCurr->next;
            }
            oddCurr = odd;
            while (oddCurr->next != nullptr) {
                oddCurr = oddCurr->next;
            }
            oddCurr->next = even->next;
            return odd;
        }

        return head;
    }
};