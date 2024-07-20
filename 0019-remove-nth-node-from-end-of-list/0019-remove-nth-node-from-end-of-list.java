/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head == null)return null;
        int size=0;
        ListNode temp = head;
        
        while(temp != null){
            size++;
            temp = temp.next;
        }
        if(size == n){
            ListNode newNode = head.next;
            // delete head;
            return newNode;
        }

        int start = size - n;
        temp = head;
        while(temp != null){
            start--;
            if(start == 0)break;
            temp= temp.next;
        }
        //deleting node
        ListNode del = temp.next;
        temp.next = temp.next.next;
        // delete del;
        return head;
    }
}