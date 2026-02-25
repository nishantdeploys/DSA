#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> preorderTraversal(TreeNode* root){
    vector<int> preorder;
    if(root == NULL) return preorder;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root->val);
        if(root->right != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);
    }
    return preorder;
}

int main(){
    /*
            1
           / \
          2   3
         / \   \
        4   5    6
    */

    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    root -> right -> right = new TreeNode(6);

    vector<int> preorder = preorderTraversal(root);
    for(int i=0;i<preorder.size();i++){
        cout << preorder[i] << " ";
    }
    cout << endl;
    return 0;
}
