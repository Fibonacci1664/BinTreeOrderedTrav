#include<iostream>
#include <vector>

 //Definition for a binary tree node.
 struct TreeNode
 {
     int val;
     TreeNode* left;
     TreeNode* right;
     TreeNode* parent;
     TreeNode() : val(0), left(nullptr), right(nullptr), parent(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr), parent(nullptr) {}
     TreeNode(int x, TreeNode* left, TreeNode* right, TreeNode* parent) : val(x), left(left), right(right), parent(parent) {}
 };
 
 std::vector<int> treeOrder;

std::vector<int> inorderTraversal(TreeNode* node)
{
    if (node != nullptr)
    {
        inorderTraversal(node->left);
        treeOrder.push_back(node->val);
        inorderTraversal(node->right);
    }

    return treeOrder;
}

int main()
{
	return 0;
}