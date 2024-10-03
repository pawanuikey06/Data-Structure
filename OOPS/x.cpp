#include <iostream>
#include <vector>
#include <stack>
#include <climits>
#include <queue>
#include<string>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to convert a STRING_ARRAY to a binary tree
TreeNode* buildTree(const vector<string>& root) {
    if (root.empty() || root[0] == "null") return nullptr;

    TreeNode* treeRoot = new TreeNode(stoi(root[0]));
    queue<TreeNode*> q;
    q.push(treeRoot);
    int i = 1;

    while (!q.empty() && i < root.size()) {
        TreeNode* current = q.front();
        q.pop();

        // Process the left child
        if (i < root.size() && root[i] != "null") {
            current->left = new TreeNode(stoi(root[i]));
            q.push(current->left);
        }
        i++;

        // Process the right child
        if (i < root.size() && root[i] != "null") {
            current->right = new TreeNode(stoi(root[i]));
            q.push(current->right);
        }
        i++;
    }

    return treeRoot;
}

// Function to check if the binary tree is a valid BST iteratively
bool isValidBST(TreeNode* root) {
    if (!root) return true;

    stack<TreeNode*> stk;
    TreeNode* current = root;
    long long prev = LLONG_MIN;  // Use long long to avoid overflow issues

    while (!stk.empty() || current != nullptr) {
        // Traverse the left subtree
        while (current != nullptr) {
            stk.push(current);
            current = current->left;
        }
        
        // Process the node
        current = stk.top();
        stk.pop();

        // If the current node's value is not greater than the previous, it's not a valid BST
        if (current->val <= prev) {
            return false;
        }

        // Update the previous value
        prev = current->val;

        // Traverse the right subtree
        current = current->right;
    }

    return true;
}

bool is_valid_bst(vector<string> root){
    TreeNode* treeRoot = buildTree(root);
    
    return isValidBST(treeRoot);
}