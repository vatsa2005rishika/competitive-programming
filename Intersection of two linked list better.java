public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA==null || headB==null) return null;
        ListNode a=headA;
        ListNode b=headB;
        int  c1=0;
        int c2=0;
        while (a!=null){
            c1++;
            a=a.next;
        }
        while(b!=null){
            c2++;
            b=b.next;
        }
        if(c2>c1){
            int c=c2-c1;

        }
        a = headA;
        b = headB;
        if (c1 > c2) {
            int diff = c1 - c2;
            while (diff > 0) {
                a = a.next;
                diff--;
            }
        } else {
            int diff = c2 - c1;
            while (diff > 0) {
                b = b.next;
                diff--;
            }
        }
        while (a != null && b != null) {
            if (a == b)
                return a;

            a = a.next;
            b = b.next;
        }

        return null;
    }
}
