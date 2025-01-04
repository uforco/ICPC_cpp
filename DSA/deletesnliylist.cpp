#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void sepNode(Node *&head)
{
    int sum = 0;
    Node *temp = head;

    Node *sumNodeList = NULL;
    Node *sumNodeTail = NULL;

    while (temp != NULL)
    {
        if (temp->val == 0 && sum != 0)
        {
            insertAtHead(sumNodeList, sumNodeTail, sum);
            sum = 0;
        }
        else
        {
            sum += temp->val;
        }
        temp = temp->next;
    }
    head = sumNodeList;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        insertAtHead(head, tail, n);
    }

    // cout << length(head) - 4 << endl;

    printList(head);

    cout << endl;

    Node *team = head;

    sepNode(team);

    cout << length(team) << endl;
    printList(team);
    return 0;
}