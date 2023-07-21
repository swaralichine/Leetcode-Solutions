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
//time complexity = O(L)
//space complexity = O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL || head->next==NULL)
        return NULL;

        ListNode* fast=head;
        ListNode* slow=head;

        while(n--)
        {
            fast=fast->next;             //Takes the pointer to the nth node

        }
        if(fast==NULL)  //edge case when n was 1 ie remove last node
        {
            return head->next;           //If Value of n is greater than no of nodes
        }
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
        
        }
};