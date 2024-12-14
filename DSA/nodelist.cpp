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

void insert_node_list(Node* &head, int val){
    Node *newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        return;    
    };
    Node *tem = head;
    cout<<tem->next<<endl;
    while (tem->next != NULL)
    {
        tem = tem->next;
        cout<<tem->next<<endl;
    }
    tem->next = newnode;
}

int main(){

    Node *head = NULL;
    
    int opt;
    while (true)
    {
        cout<<"Option 1 insert Node List"<<endl;
        cout<<"Option 2 Print Node List"<<endl;
        cout<<"Option 3 Exit"<<endl;
        cin>>opt;
        if(opt == 1){
            int x;
            cout<<"insert Number";
            cin>>x;
            insert_node_list(head, x);
        }
        else if(opt == 2){
            Node *tem = head;
            while (tem != NULL)
            {
                cout<<tem->val<<endl;
                tem = tem->next;
            };
        }
        else if(opt == 3) {
            cout<<"exit funtion"<<endl;
            break;
        };
    }
    return 0;
}