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
//Time Complexity=O(n)
//simply put all the elements in an array and then find the max twin sum
class Solution 
{
public:
    int pairSum(ListNode* head) 
    {
        ListNode* temp=head;
        vector<int> ans;    //to store the LL elements
        while(temp)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int max_sum=-1;
        int sum=0;
        int n=ans.size();
        for(int i=0;i<=(n/2)-1;i++)
        {
            sum=ans[i]+ans[n-i-1];
            if(sum>=max_sum)
            {
                max_sum=sum;
            }
        }
        return max_sum;
    }
};