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
    bool linklistsize = false;
    Node*tem = head;
    while (tem->next != NULL)
    {
        Node*chackNode = tem->next;
        while ( chackNode != NULL )
        {
            if( tem->val == chackNode->val ){
                linklistsize = true;
            }
            chackNode = chackNode->next;
        }
        
        tem = tem->next;
    }
    if(linklistsize) cout<<"YES";
    else cout<<"NO";

    return 0;
}