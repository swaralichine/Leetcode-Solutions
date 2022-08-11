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


class Solution {
public:
int pairSum(ListNode* head) {
    vector<int> arr;
    while(head){
        arr.push_back(head->val);
        head=head->next;
    }
    int n=arr.size()-1;
    int maxSum=0,sum;
    for(int i=0;i<=n;i++) {
        sum = (arr[i]+arr[n-i]);
        if(sum>maxSum){
            maxSum = sum;
        }
    }
    return maxSum;
}
};