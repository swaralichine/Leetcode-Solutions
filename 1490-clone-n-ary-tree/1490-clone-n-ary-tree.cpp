/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
//time complexity=O(M) M=number of nodes in the input tree
//space complexity=O(lognM) 
//using DFS
class Solution 
{
private:
    Node* dfs(Node* root) 
    {
        if(root == nullptr) 
            return nullptr;
        Node* copytree = new Node(root->val);
        
        for(int i=0;i<root->children.size();i++)
        {
            copytree->children.push_back(dfs(root->children[i]));
        }
      return copytree;
    }
public:
    Node* cloneTree(Node* root) 
    {
        if(root == nullptr)
            return nullptr;
        return dfs(root);
    }
};