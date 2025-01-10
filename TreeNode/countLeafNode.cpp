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
    // int isExist = 0;
    if (root == NULL)
        return 0;
    int l = isNumberDapt(root->left, x);
    int r = isNumberDapt(root->right, x);
    if (root->val == x)
        return max(l, r) + 1;
    if (l >= 0 && r >= 0)
        return max(l, r) + 1;
    else
        return max(l, r);
}

int lvltree(BNode *root)
{
    if (root == NULL)
        return 0;
    int l = lvltree(root->left);
    int r = lvltree(root->right);
    return max(l, r) + 1;
}

int main()
{
    BNode *root = insert_tree();

    // int leafNode = leafNodeCount(root);

    cout << isNumberDapt(root, 6) << endl;

    return 0;
}