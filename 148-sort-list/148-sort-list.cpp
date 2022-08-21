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
//time complexity=O(nlogn)
//space complexity=O(1)
//Use merge sort
class Solution 
{
public:
    ListNode* merge(ListNode* l,ListNode* r)
    {
        if(l!=nullptr and r!=nullptr)
        {
            if(l->val <= r->val)
            {
                l->next=merge(l->next,r);
                return l;
            }
            else
            {
                r->next=merge(l,r->next);
                return r;
            }
        }
        return (l==nullptr ? r : l);
    }
    ListNode* merge_sort(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        //2 length linked list
        if(head->next->next==nullptr)
        {
            if(head->next->val < head->val)
            {
                ListNode* next_node=head->next;
                next_node->next=head;
                head->next=nullptr;
                head=next_node;
            }
            return head;
        }
        //1->2->3 (slow is at n/2)
        //1->2->3->4 (slow is at n/2+1)
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* node2=merge_sort(slow->next);   //right side
        slow->next=nullptr;
        ListNode* node1=merge_sort(head);    //left side
        
        return merge(node1,node2);
        
    }
    ListNode* sortList(ListNode* head) 
    {
        return merge_sort(head);
    }
};