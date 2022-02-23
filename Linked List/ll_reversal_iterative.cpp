#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data= d;
        next=NULL;
    }
};

void insertInBeginning(Node** head, int n){
    Node* new_node = new Node(n);
    new_node->next = (*head);
    (*head) = new_node;    
}

void reverseLinkedList(Node** head){
    Node* prev = NULL;
    Node* curr = *head;
    Node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}

void printLinkedList(Node* head){

    if(head==NULL){
        cout<<"The linked list is empty!!\n";
        return;
    }
    while(head !=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    insertInBeginning(&head, 1);
    insertInBeginning(&head, 2);
    insertInBeginning(&head, 3);
    insertInBeginning(&head, 4);
    insertInBeginning(&head, 5);
    printLinkedList(head);
    reverseLinkedList(&head);
    printLinkedList(head);
}