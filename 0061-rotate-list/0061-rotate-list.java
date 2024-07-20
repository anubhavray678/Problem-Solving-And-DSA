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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null)return head;
        ListNode temp = head;
        int size=0;
        while(temp != null){
            size++;
            temp = temp.next;
        }
        int requiredKRotations = k % size;
        for(int i=0; i<requiredKRotations; ++i){
            ListNode curr = head;
            while(curr.next.next != null){
                curr = curr.next;
            }
            ListNode last = curr.next;
            last.next = head;
            curr.next = null;
            head = last;
        }
        
        return head;
    }
}