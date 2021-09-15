Node* deleteNode(Node *head,int x)
{
    //Your code here
    struct Node * temp= head;
    struct Node *prev=head;
    
    int c=1;
    if(x==1){
        head=temp->next;
        free(temp);
        return head;
    }
    while(c!=x)
    {
        temp=temp->next;
        c++;
    }
    while(temp!=NULL && prev->next!=temp)
    {
        prev=prev->next;
    }
    prev->next=temp->next;
    free(temp);
    return head;
    
}
