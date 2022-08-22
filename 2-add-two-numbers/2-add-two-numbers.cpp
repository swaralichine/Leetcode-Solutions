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
//Time Complexity=O(max(m,n))
//Space Complexity=O(max(m,n))
//m and n represents the lengths of l1 and l2 resp.
class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        //create a new dummy node
        ListNode* dummy = new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        //traverse the lists until you reach both the ends and carry is zero
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum=sum+l2->val;
                l2=l2->next;
            }
            if(carry!=0)
            {
                sum=sum+carry;
            }
            carry=sum/10;
            
            ListNode* node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }   
        return dummy->next;
    }
};