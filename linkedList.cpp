#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

void printlist(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void addelementatend(Node*& head,int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    if(temp==NULL){
        head = newNode;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

Node* reversell(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    while(curr){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
int main(){
    int n;//No of elements
    cin>>n;
    Node* head = NULL;
    while(n--){
        int k;
        cin>>k;
        addelementatend(head,k);
    }
    printlist(head);
    printlist(reversell(head));
}