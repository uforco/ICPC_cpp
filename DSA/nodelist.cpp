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

void insert_node_list(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    };
    Node *tem = head;
    cout << tem->next << endl;
    while (tem->next != NULL)
    {
        tem = tem->next;
        cout << tem->next << endl;
    }
    tem->next = newnode;
}

void insert_positon_node(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tem = head;

    if (pos == 0)
    {
        newNode->next = tem;
        head = newNode;
        return;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next = newNode;
}

int main()
{

    Node *head = NULL;

    int opt;
    while (true)
    {
        cout <<endl<< "Option 1 insert Node List" << endl;
        cout << "Option 2 Print Node List" << endl;
        cout << "Option 3 insert node at positions" << endl;
        cout << "Option 4 Exit" << endl<<endl;
        cout<<"Enter Option Number : ";
        cin >> opt;
        if (opt == 1)
        {
            int x;
            cout << "insert Number : ";
            cin >> x;
            insert_node_list(head, x);
        }
        else if (opt == 2)
        {
            Node *tem = head;
            cout<<endl<<" Print All List of Node : ";
            while (tem != NULL)
            {
                cout << tem->val << " ";
                tem = tem->next;
            };
            cout<<endl;
        }
        else if (opt == 3)
        {
            int pos, val;
            cout << "Enter node Position : ";
            cin >> pos;
            cout << "Enter value : ";
            cin >> val;
            insert_positon_node(head, pos, val);
        }
        else if (opt == 4)
        {
            cout << "exit funtion" << endl;
            break;
        };
    }
    return 0;
}