/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/
//Time Complexity=O(H)
//Space Complexity=O(1)
class Solution 
{
public:
    Node* inorderSuccessor(Node* node) 
    {
        if(node->right)
        {
            node=node->right;
            while(node->left)
            {
                node=node->left;
            }
        }
        else
        {
            while(node->parent && node==node->parent->right)
            {
                node=node->parent;
            }
            node=node->parent;
        }
        return node;
    }
};




