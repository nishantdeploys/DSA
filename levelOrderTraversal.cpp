#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    TreeNode* left;
    TreeNode* right;
    int val;
    TreeNode(int val){
        this -> val = val;
        left = NULL;
        right = NULL;
    }
};
// vector<vector<int>> levelOrder(TreeNode* root){
//     vector<vector<int>> ans;
//     if(root == NULL) return ans;
//     queue<TreeNode*> q;
//     q.push(root);
//     while(!q.empty()){
//         int size = q.size();
//         vector<int> level;
//         for(int i=0;i<size;i++){
//             TreeNode* node = q.front();
//             q.pop();
//             level.push_back(node->val);
//             if(node->left != NULL) q.push(node->left);
//             if(node->right != NULL) q.push(node->right);
//         }
//         ans.push_back(level);
//     }
//     return ans;
// }

vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> levels;
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node -> left);
            if(node->right != NULL) q.push(node -> right);
            levels.push_back(node->val);
        }
        ans.push_back(levels);
    }
    return ans;
}

int main(){
    
    /*
            1
           / \
          2   3
         / \   \
        4   5    6
    */

    // Manual Tree Creation
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    // Call Level Order
    vector<vector<int>> result = levelOrder(root);

    // Print Output
    for(auto level : result){
        for(auto val : level){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}