#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isValidBSTHelper(TreeNode* node, long minVal, long maxVal) {
    if (!node) {
        return true;  
    }
    
    if (node->val <= minVal || node->val >= maxVal) {
        return false;
    }
    
    return isValidBSTHelper(node->left, minVal, node->val) && 
           isValidBSTHelper(node->right, node->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
}

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    
    if (isValidBST(root)) {
        cout << "The tree is a valid BST." << endl;
    } else {
        cout << "The tree is NOT a valid BST." << endl;
    }
    
    return 0;
}
