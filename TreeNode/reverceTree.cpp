#include <bits/stdc++.h>
using namespace std;

class BNode
{
public:
    int val;
    BNode *left;
    BNode *right;
    BNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

BNode *insert_tree()
{
    queue<BNode *> q;
    BNode *root;
    int x;
    cin >> x;
    if (x == -1)
        root = NULL;
    else
        root = new BNode(x);

    if (root)
        q.push(root);

    while (!q.empty())
    {
        BNode *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        if (l == -1)
            f->left = NULL;
        else
        {
            f->left = new BNode(l);
            q.push(f->left);
        }
        if (r == -1)
            f->right = NULL;
        else
        {
            f->right = new BNode(r);
            q.push(f->right);
        }
    }
    return root;
}

vector<int> reverceTree(BNode *root)
{
    vector<int> n;
    queue<BNode *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        BNode *f = q.front();
        q.pop();

        n.push_back(f->val);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    reverse(n.begin(), n.end());
    return n;
}

int main()
{

    BNode *root = insert_tree();

    vector<int> v = reverceTree(root);

    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}