#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node *&HEAD, Node *&TAIL, int val)
{
    Node *newNode = new Node(val);
    if (HEAD == NULL)
    {
        HEAD = newNode;
        TAIL = newNode;
        return;
    }
    TAIL->next = newNode;
    newNode->prev = TAIL;
    TAIL = newNode;
}

int main()
{
    Node *HEAD = NULL;
    Node *TAIL = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertAtHead(HEAD, TAIL, n);
    }

    Node *temp = HEAD;
    bool flag = true;

    while (true)
    {
        int n;
        cin >> n;
        if ((n == -1 && temp != NULL) || (n != -1 && temp == NULL))
        {
            flag = false;
            break;
        }
        if (n == -1)
        {
            break;
        }
        if (temp->val != n || temp == NULL)
        {
            flag = false;
            break;
        }
        else
        {
            flag = true;
        }
        temp = temp->next;
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}