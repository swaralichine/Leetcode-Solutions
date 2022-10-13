/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//time complexity=O(1)
//space complexity=O(1)
//Trick is to copy the contents of the next node in the node to be deleted
class Solution 
{
public:
    void deleteNode(ListNode* node) 
    {
        ListNode *next = node->next;
        node->val=next->val;
        node->next=next->next;
        delete next;
    }
};