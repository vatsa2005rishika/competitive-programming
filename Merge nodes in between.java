class Solution {
    public ListNode mergeNodes(ListNode head) {
        ListNode modify=head.next;
        ListNode nextsum=modify;

        while(nextsum!=null){
            int currentsum=0;
            
            while(nextsum.val!=0){
                currentsum+=nextsum.val;
                nextsum=nextsum.next;
            }

            modify.val=currentsum;
            nextsum=nextsum.next;
            modify.next=nextsum;
            modify=modify.next;
        }
        return head.next;
    }
}
