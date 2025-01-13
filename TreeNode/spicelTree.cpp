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

int mx = 0;

int lvldiameter(BNode *root)
{
    if (root == NULL)
        return 0;
    int l = lvldiameter(root->left);
    int r = lvldiameter(root->right);
    int d = max(mx, l + r);
    mx = d;
    return max(l, r) + 1;
}

bool spicelTree(BNode *root)
{
    if (root->left == NULL && root->right == NULL)
        return true;
    if (root->left == NULL || root->right == NULL)
        return false;
    bool l = spicelTree(root->left);
    bool r = spicelTree(root->right);
    if (l == false || r == false)
        return false;
    return true;
};

int main()
{

    BNode *root = insert_tree();

    if (spicelTree(root))
        cout << "spicel Tree";
    else
        cout << "Not spicel Tree";

    return 0;
}