/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//time complexity=O(max(M,N))
//space complexity=O(1)
//using two pointer approach
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        
        int len1=0;
        int len2=0;
        
        while(temp1!=NULL)
        {
            len1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            len2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        
        if(len1>len2)
        {
            for(int i=0;i<len1-len2;i++)
            {
                temp1=temp1->next;
            }
        }
        else
        {
            for(int i=0;i<len2-len1;i++)
            {
                temp2=temp2->next;
            }   
        }
        //now they are of equal length and we start traversing
        while(temp1 != temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;   //we can return temp2 as well
    }
};