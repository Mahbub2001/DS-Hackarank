Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data < root->data)
    {
        if (root->left == NULL)
        {
            root->left = new Node(data);
        }
        else
        {
            insert(root->left, data);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(data);
        }
        else
        {
            insert(root->right, data);
        }
    }
    return root;
}