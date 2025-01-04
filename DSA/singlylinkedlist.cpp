# include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void inser_list (Node*&head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node*tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}

int main(){
    Node *head = NULL;
    while (true)
    {
        int x;
        cin>>x;
        if(x == -1) break;
        inser_list(head, x);
    };
    int linklistsize = 0;
    Node*tem = head;
    while (tem != NULL)
    {
        linklistsize++;
        tem = tem->next;
    }
    cout<<endl;
    cout<<linklistsize<<endl;

    return 0;
}