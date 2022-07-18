/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Using Floyd's Tortoise and Hare Approach
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* head1=head;
       bool flag = false;
       
        
       while(fast != NULL && fast->next != NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           if(slow == fast)
           {
             while (head1 != fast)
            {
                head1 = head1->next;
                fast = fast->next;

            }
            return head1;
           }
       }
        return nullptr;
    }
};