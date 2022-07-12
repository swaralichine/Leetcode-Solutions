# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        temp1 = l1
        temp2 = l2
        new = reserve = ListNode(0);
   
        carry = 0
        
        while temp1 or temp2 or carry:
            if temp1:
                carry+=temp1.val
                temp1=temp1.next;
            if temp2:
                carry+=temp2.val
                temp2=temp2.next;
            
            new.next = ListNode(carry%10)
            carry = carry//10
            new=new.next
            
        return reserve.next
        
        