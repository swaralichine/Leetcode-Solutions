/*Intuition
We need to divide a linked list into k parts, such that the parts are as evenly distributed as possible. Each part should have roughly the same number of elements, and the earlier parts should contain more elements if there is a remainder. If there are fewer nodes than k, some parts will be null. This can be achieved by traversing the list to calculate its length and then determining how to distribute the nodes across k parts.

Approach
1.Calculate the total length of the linked list by traversing it once.
2.Determine the size of each part by dividing the total length by k. This will give the base size of each part. If there’s a remainder, the first remainder parts will get one extra node.
3.Split the list by traversing it again and breaking it into parts. For each part, assign the necessary number of nodes based on the calculated sizes.
4.If the number of nodes is less than k, the extra parts will be null.

Complexity

1.Time complexity:
The time complexity is O(n), where n is the total number of nodes in the linked list. We traverse the list once to calculate its length and once more to split it into parts.

2.Space complexity:
The space complexity is O(k) for storing the k parts. No additional space is used other than the result array and the existing linked list, so the overall space complexity is O(k)

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
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        vector<ListNode*> result (k,nullptr);
        
        //Step 1: Calculate the total length of the linked list
        
        int len = 0;
        ListNode* current = head;
        while(current != nullptr)
        {
            len ++;
            current = current -> next;
        }
        
        //Step 2: Determine the base size and the remiander
        
        int size = len / k;
        int extra = len % k; //Number of parts that will have one extra element
        
        current = head;
        for(int i=0;i<k;i++)
        {
            if(current == nullptr)
            {
                result [i] = nullptr; //If the list is smaller than k, add null parts
            }
            else
            {
                result [i] = current; //Start a new part
                int partsize = size + (extra > 0 ? 1 : 0);  //This is part's size
                extra --;
                
                //Move to the end of this part
                for(int j=1;j<partsize;j++)
                {
                    if(current != nullptr)
                    {
                        current = current -> next;
                    }
                }
                
                //Break the current part from the rest of the list
                if(current != nullptr)
                {
                    ListNode* nextpart = current -> next;
                    current -> next = nullptr;
                    current = nextpart;
                }
            }
        }
        
        return result;
    }
};