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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr)return nullptr;
        if(head->next == nullptr)return head;

        ListNode* ans = head;
        ListNode* ptr1 = ans;
        ListNode* ptr2 = ans->next;

        while(ptr2 != nullptr){
            int g = __gcd(ptr1->val, ptr2->val);
            ListNode* temp = new ListNode(g);
            ptr1->next = temp;
            temp->next = ptr2;
            ptr1=ptr2;
            ptr2= ptr2->next;

        }
        return ans;
    }
private:
    int gcd(int a, int b){
        if(a == 0) return b;
        if(b == 0) return a;
        if(a == b) return a;
        if (a > b) return gcd(a - b, b); 
        return gcd(a, b - a); 
    }
};