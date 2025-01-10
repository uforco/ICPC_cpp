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

vector<int> printTree(BNode *root)
{
    vector<int> v;
    if (root == NULL)
        return v;
    // cout << root->val << " ";
    vector<int> vl = printTree(root->left);

    vector<int> vr = printTree(root->right);

    if (root->left)
    {
        int x = root->left->val;
        v.push_back(x);
    }
    v.insert(v.end(), vl.begin(), vl.end());

    v.insert(v.end(), vr.begin(), vr.end());

    return v;
}

int main()
{

    BNode *root = insert_tree();

    vector<int> v = printTree(root);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}