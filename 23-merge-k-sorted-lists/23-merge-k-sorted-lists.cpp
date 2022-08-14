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
//time complexity=(nlogk)
//space complexity=O(k)  at max we are storing k pointers in the priority queue
//using min heap
//use k different pointers and take the minimum of each 
//take priority queue and insert the head of all lists
//at a time maximum k values can be there in the priority queue
//insert node pointer instead of node value in the priority queue

class Solution
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        //declaring a comparator
        auto cmp= [](ListNode* a,ListNode* b)
        {
            return a->val > b->val;
        };
        priority_queue<ListNode*,vector<ListNode*>, decltype(cmp) > pq(cmp);
        
        //insert all lists pointers 
        for(auto l:lists)
        {
            if(l)
            {
                pq.push(l);
            }
        }
        //if priority queue is empty
        if(pq.empty())
        {
            return nullptr;
        }
        //pop the top element which is the smallest element
        //head always points to the start of pq
        ListNode* head = pq.top();
        pq.pop();
        //insert the next element of the popped element into pq
        if(head->next)
        {
            pq.push(head->next);
        }
        head->next=nullptr;
        //curr points to the latest element
        ListNode* curr=head;
        while(!pq.empty())
        {
            ListNode* n=pq.top();
            pq.pop();
            curr->next=n;
            curr=n;
            if(n->next)
            {
                pq.push(n->next);
            }
        }
        return head;
    }
};