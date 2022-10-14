# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None or head.next==None: return 
        count = count2 =  0
        curr = temp = head
        prev = ListNode(0,head)
        while temp:
            count+=1
            temp = temp.next
        
        while curr:
            if count2==count//2:
                saved = curr.next
                curr.next = None
                prev.next = saved
            count2+=1
            curr = curr.next
            prev = prev.next

        return head
            
        