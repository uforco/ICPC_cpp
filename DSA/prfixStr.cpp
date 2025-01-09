#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

class Stack
{
    // Write your code here
    Node *Head = NULL;
    Node *Tail = NULL;
    int count = 0;

public:
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        // Write your code here
        return count;
    }

    bool isEmpty()
    {
        // Write your code here
        if (Head == NULL)
            return true;
        else
            return false;
    }

    void push(int data)
    {
        count++;
        Node *newNode = new Node(data);
        // Write your code here
        if (Head == NULL)
        {
            Head = newNode;
            Tail = newNode;
            return;
        }
        Tail->next = newNode;
        Tail = Tail->next;
    }

    void pop()
    {
        // Write your code here
        count--;
        Node *team = Head;
        if (team->next == NULL)
        {
            Head = NULL;
            Tail = NULL;
            return;
        }
        Node *deleteNode = Tail;
        while (team != NULL)
        {
            if (team->next == deleteNode)
            {
                Tail = team;
                Tail->next = NULL;
                break;
            }
            team = team->next;
        }
        delete deleteNode;
    }

    int getTop()
    {
        // Write your code here
        return Tail->data;
    }
};

int main()
{
    Stack st;

    st.push(4);
    st.push(35);
    st.push(34);
    st.push(4);
    st.push(5);

    // cout << st.getSize();

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    // st.pop();

    cout << st.getSize() << endl;

    if (!st.isEmpty())
        cout << st.getTop();

    // Node *head = NULL;
    // Node *tail = NULL;

    // Node *newnode = new Node(10);

    // if (head == NULL)
    // {
    //     head = newnode;
    //     tail = newnode;
    // }

    // Node *a = new Node(20);
    // Node *b = new Node(20);
    // Node *c = new Node(20);

    // tail->next = a;
    // tail = tail->next;
    // tail->next = b;
    // tail = tail->next;
    // tail->next = c;
    // tail = tail->next;

    // Node *team = head;

    // while (team == NULL)
    // {
    //     /* code */
    //     cout << team->data << endl;
    //     team team->next;
    // }

    return 0;
}