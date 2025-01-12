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

int leafNodeCount(BNode *root)
{
    if (root == NULL)
        return 0;
    int sum = 0;
    if (root->left == NULL && root->right == NULL)
        sum++;
    sum += leafNodeCount(root->left);
    sum += leafNodeCount(root->right);
    return sum;
}

bool isNumber(BNode *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    return isNumber(root->left, x) || isNumber(root->right, x);
}

int isNumberDapt(BNode *root, int x)
{
    int lvl = 0;
    // vector<int> v;
    bool flag = false;
    if (root == NULL)
        return 0;
    // cout << root->val << " ";
    queue<BNode *> q;
    q.push(root);

    while (!q.empty())
    {
        BNode *f = q.front();
        q.pop();

        if (f->val == x)
        {
            lvl++;
            flag = true;
            break;
        }

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }

        lvl++;
    };

    if (flag)
        return lvl;
    else
        return 0;
}

int lvltree(BNode *root, int x)
{
    if (root == NULL)
        return 0;
    if (root->val == x)
        return 1;
    int l = lvltree(root->left, x);
    int r = lvltree(root->right, x);
    if (l)
        return l + 1;
    if (r)
        return r + 1;
    return 0;
}

int main()
{
    BNode *root = insert_tree();

    // int leafNode = leafNodeCount(root);

    cout << lvltree(root, 25) << endl;

    return 0;
}