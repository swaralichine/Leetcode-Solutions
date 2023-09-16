/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Floyd's Cycle Algorithm
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    bool hasCycle(ListNode *head) 
    {
        //if head is NULL 
        if(head == NULL)
        {
            return false;
        }
        //making two pointers slow and fast pointing to null
        ListNode *slow=head;
        ListNode *fast=head;
        
        //till fast and fast->next not reaches NULL, we increment fast by two and slow by one
        while(fast != NULL and fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            //at some point if both the pointers are equal it means there exists a cycle
            if(fast == slow)
            {
                return true;
            }
        }
        //if traversal reaches to null means there is no cycle
        return false;
    }
};
