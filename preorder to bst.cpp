int construct(int pre[],int n,int pos,Node* curr,int left,int right)
{
    if(pos==n || pre[pos]<left || pre[pos]>right)
    {
        return pos;
    }
    if(pre[pos]<curr->data)
    {
        curr->left = newNode(pre[pos]);
        pos+=1;
        pos=construct(pre,n,pos,curr->left,left,curr->data-1);
    }
    if(pos==n || pre[pos]<left || pre[pos]>right)
    {
        return pos;
    }
    curr->right=newNode(pre[pos]);
    pos+=1;
    pos=construct(pre,n,pos,curr->right,curr->data+1,right);
    return pos;
}

//Function that constructs BST from its preorder traversal.

Node* constructTree(int pre[], int size)
{
    //code here
    Node* root=newNode(pre[0]);
    if(size==1)
    {
        return root;
    }
    construct(pre,size,1,root,INT_MIN,INT_MAX);
    return root;
}
