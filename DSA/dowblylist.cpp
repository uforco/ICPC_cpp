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

void PrintList(Node *head)
{
    Node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << ' ';
        tem = tem->next;
    }
    // cout << endl;
    // cout << "----------------" << endl;
}

void revesort(Node *HEAD, Node *tail)
{
    Node *i = HEAD;
    Node *j = tail;
    while (i != j)
    {
        if (i->next == j)
        {
            swap(i->val, j->val);
            return;
        }
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
};

void cycledetect(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Cycle Detected" << endl;
            return;
        }
    }
    cout << "Cycle Not Detected" << endl;
}

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
    // cycledetect(HEAD);

    // PrintList(HEAD);
    revesort(HEAD, TAIL);
    PrintList(HEAD);

    return 0;
}