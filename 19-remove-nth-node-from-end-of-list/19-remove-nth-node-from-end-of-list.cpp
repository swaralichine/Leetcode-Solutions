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
class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummy = new ListNode();
        dummy -> next = head;
        
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        
        for(int i=0;i<n;i++)
        {
            fast = fast -> next;
        }
        while(fast -> next != NULL)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        
        return dummy -> next;
    }
};