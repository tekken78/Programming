#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

void push(Node** head, int n){
    Node* new_node = new Node(n);
    new_node->next = (*head);
    (*head) = new_node; 
}

void deleteKey(Node** head, int key){
    if((*head)->data == key){
        *head = (*head)->next;
        return;
    }
    Node* curr = *head;
    Node* prev = NULL;
    while(curr!=NULL){
        if(curr->data == key){
            prev->next = curr->next;
            delete(curr);
            curr= prev->next;
        }
        else{
            prev = curr;
            curr= curr->next;
        }
    }
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
    while(1){
        int n;
        cin>>n;
        if(n==-1)break;
        push(&head, n);
    }
    printLinkedList(head);
    int key;
    cin>>key;
    deleteKey(&head, key);
    printLinkedList(head);
    
}