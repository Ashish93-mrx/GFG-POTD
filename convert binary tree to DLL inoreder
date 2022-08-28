class Solution
{
    public:
    Node* head=NULL;
    Node* temp=NULL;
    
    void Insert(Node* root)
    {
        if(head==NULL)
            head=temp=root;
        else
        {
            Node *newnode=root;
            temp->right=newnode;
            newnode->left=temp;
            temp=newnode;
        }
    }
    
    
    void DLL_Inorder(Node* root)
    {
        if(root->left!=NULL)
            DLL_Inorder(root->left);
            
        Insert(root);
        
        if(root->right!=NULL)
        {
            DLL_Inorder(root->right);
        }
    }
    
    
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        // your code here
        DLL_Inorder(root);
        return head;
    }
