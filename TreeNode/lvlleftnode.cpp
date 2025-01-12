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

vector<int> leftlvlint(BNode *root)
{
    bool feq[3005] = {false};
    queue<pair<BNode *, int>> q;
    q.push({root, 1});
    vector<int> v;

    while (!q.empty())
    {
        pair pr = q.front();
        q.pop();
        BNode *node = pr.first;
        int lvl = pr.second;

        if (feq[lvl] == false)
        {
            v.push_back(node->val);
            feq[lvl] = true;
        }

        if (node->left)
            q.push({node->left, lvl + 1});
        if (node->right)
            q.push({node->right, lvl + 1});
    }
    return v;
}

int main()
{

    BNode *root = insert_tree();

    vector<int> leftlvlnode = leftlvlint(root);

    for (auto i : leftlvlnode)
    {
        cout << i << " ";
    }

    return 0;
}