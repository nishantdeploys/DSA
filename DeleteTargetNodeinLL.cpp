#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* nxt;
    Node(int val){
        this->val = val;
        this->nxt = nxt;
    }
};


void display(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->val << "->";
        temp = temp->nxt;
    }
    cout<<"NULL\n";
}

void deletetheval(Node*& head,int val){
    Node* temp = head;
    if(head->val == val){
        head = head->nxt;
        return;
    }
    while(temp){
        if(temp->nxt->val == val){
            break;
        }
        temp = temp->nxt;
    }
    temp->nxt = temp->nxt->nxt;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->nxt = b;
    b->nxt = c;
    c->nxt = d;
    d->nxt = e;

    display(a);
    deletetheval(a,10);
    display(a);

}