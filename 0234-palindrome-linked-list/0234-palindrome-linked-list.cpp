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
    ListNode* reverse(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr != nullptr)
        {
            ListNode *temp = new ListNode(curr->val);
            temp->next = prev;
            curr = curr->next;
            prev = temp;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
       if(head == nullptr || head->next == nullptr)return true;
       ListNode* rev =  reverse(head);
       ListNode* h1  =  head;
       while(head != nullptr && rev != nullptr){
            if(head->val != rev->val)
                return false;
            head = head->next;
            rev = rev->next;
       }
       return true;
    }
};