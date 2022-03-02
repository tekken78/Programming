#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data =d;
        next = NULL;
    }
};

void findMiddleNode(Node** head){
    Node* slowPtr = *head;
    Node* fastPtr = *head;
    if(head != NULL){
        while(fastPtr!=NULL && fastPtr->next != NULL){
            fastPtr= fastPtr->next->next;
            slowPtr=slowPtr->next;
        }
        cout<<"The middle node value is: "<<slowPtr->data<<endl;
    }
    else cout<<"The linked list is empty"<<endl;
}

void push(Node** head, int n){
    Node* new_node = new Node(n);
    new_node->next = (*head);
    (*head) = new_node; 
}

int main(){
    Node* head = NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    findMiddleNode(&head);
}