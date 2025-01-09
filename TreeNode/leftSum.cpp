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
int printTree(BNode *root)
{
    int sum = 0;
    if (root == NULL)
        return 0;
    // cout << root->val << " ";
    if (root->left)
    {
        sum += root->left->val;
    }
    sum += printTree(root->left);
    sum += printTree(root->right);
    return sum;
}

int main()
{
    BNode *root = insert_tree();

    int v = printTree(root);

    cout << v;

    return 0;
}