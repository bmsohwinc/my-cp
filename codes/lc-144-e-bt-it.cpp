/*
Problem: https://leetcode.com/problems/binary-tree-preorder-traversal/
Time: 20
Idea: {
    Instead of recursive strategy, used an iterative approach.
    It was actually nice.
}

*/

class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == nullptr) return ans;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while (!st.empty()) {
            TreeNode *top = st.top();
            st.pop();
            ans.push_back(top -> val);
            if ((top -> right) != nullptr) {
                st.push(top -> right);
            }
            if ((top -> left) != nullptr) {
                st.push(top -> left);
            }
        }
        
        return ans;
    }

};
