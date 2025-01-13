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

// bool isUnivalTree(BNode *root)
// {
//     bool flag = true;
//     queue<BNode *> q;
//     if (root)
//         q.push(root);
//     while (!q.empty())
//     {
//         BNode *f = q.front();
//         q.pop();

//         if (f->left)
//         {
//             q.push(f->left);
//             if (f->val != f->left->val)
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (f->right)
//         {
//             q.push(f->right);
//             if (f->val != f->right->val)
//             {
//                 flag = false;
//                 break;
//             }
//         }
//     }
//     return flag;
// }

// vector<int> leafNode(BNode *root)
// {
//     vector<int> v;
//     if (root == NULL)
//         return v;
//     if (root->left == NULL && root->right == NULL)
//     {
//         v.push_back(root->val);
//         return v;
//     }
//     vector<int> l = leafNode(root->left);
//     vector<int> r = leafNode(root->right);
//     v.insert(v.end(), l.begin(), l.end());
//     v.insert(v.end(), r.begin(), r.end());
//     return v;
// }

bool isSameTree(BNode *p, BNode *q)
{
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
};

int main()
{

    BNode *r1 = insert_tree();
    BNode *r2 = insert_tree();

    bool v = isSameTree(r1, r2);

    cout << v;

    // vector<int> root1 = leafNode(r1);
    // vector<int> root2 = leafNode(r2);

    // if (root1.size() != root2.size())
    // {
    //     cout << "NoT Mach 1";
    // }
    // else
    // {
    //     for (int i = 0; i < root1.size(); i++)
    //     {
    //         if (root1[i] != root2[i])
    //         {
    //             cout << "NOT Mach 2";
    //         }
    //     }
    // }
    // cout << "breack";
    return 0;
}