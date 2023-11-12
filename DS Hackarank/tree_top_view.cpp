void topView(Node *root)
{
    queue<pair<int, Node *>> q;
    q.push({0, root});
    map<int, Node *> mp;
    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        if (it.second != NULL)
        {
            mp.insert(it);
            q.push({it.first + 1, it.second->right});
            q.push({it.first - 1, it.second->left});
        }
    }
    for (auto val : mp)
    {
        cout << val.second->data << " ";
    }
}