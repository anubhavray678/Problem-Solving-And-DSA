/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int c1=0,c2=0;
//         int diff;
//         ListNode* ptr1 = headA; 
//         ListNode* ptr2 = headB;
//         while(ptr1){
//             c1++;
//             ptr1=ptr1->next;
//         }
//          while(ptr2){
//             c2++;
//             ptr2=ptr2->next;
//         }
//         ptr1 = headA;
//         ptr2 = headB;
//         diff = abs(c1-c2);
//         if(c1<c2){
//             for(int i=1; i<=diff; ++i){
//                 ptr1=ptr1->next;
//             }
//         }
//         else if(c1>c2){
//             for(int i=1; i<=diff; ++i){
//                 ptr2=ptr2->next;
//             }
//         }

//         while(ptr1!=ptr2){
//             //  if(ptr1==ptr2) return headA;
//             ptr1=ptr1->next;
//             ptr2=ptr2->next;
//             // if(ptr1==NULL||ptr2==NULL)
//             //     return NULL;
//         }
         
//   if(ptr1!=NULL)return NULL;
//         return ptr1;

unordered_map<ListNode*,int>mpp;
    for (auto p = headA ; p!=NULL ; p = p->next){
        mpp[p]++;
    }
    for (auto p = headB ; p!=NULL ; p = p->next){
        if (mpp.find(p)!=mpp.end()) return p;
    }
    return NULL;
    }
    
};