#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node *next;

    public:
    Node(int data){
        val = data;
        next = NULL;
    }
    Node(){}
};


void printList(Node *head){
    Node *temp = head;
    if(head==NULL)
    {
        cout << "Head is NULL" << endl;
        return;
    }
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAfter(Node *head,int pos,int val){
    if(head==NULL)
        return;
    Node *newNode = new Node(val);
    Node *temp = head;
    int count = 1;
    while(temp!=NULL&&count<pos){
        temp = temp->next;
        count++;
    }
    if(temp==NULL)
        return;
    else{
        Node *nextNode = temp->next;
        temp->next = newNode;
        newNode->next = nextNode;
    }
}

void insertBack(Node *head,int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

int main(){
    Node *h1 = new Node(1);
    Node *temp = h1;
    for (int i = 2; i <= 5;i++){
        Node *newNode = new Node(i);
        temp->next = newNode;
        temp = newNode;
    }

    printList(h1);
    insertBack(h1, 6);
    printList(h1);

    insertAfter(h1, 3, 8);
    printList(h1);
}