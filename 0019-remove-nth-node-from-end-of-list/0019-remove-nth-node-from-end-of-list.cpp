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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)return NULL;
        int size=0;
        ListNode* temp = head;
        
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        if(size == n){
            ListNode* newNode = head->next;
            delete head;
            return newNode;
        }

        int start = size - n;
        temp = head;
        while(temp != nullptr){
            start--;
            if(start == 0)break;
            temp= temp->next;
        }
        //deleting node
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};