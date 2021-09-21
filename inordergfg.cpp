class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void trav(Node* root,vector<int> &v)
    {
        if(root==NULL)
        {
            return;
        }
        trav(root->left,v);
        v.push_back(root->data);
        trav(root->right,v);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        
        vector<int> v;
        trav(root,v);
        return v;
    }
};
