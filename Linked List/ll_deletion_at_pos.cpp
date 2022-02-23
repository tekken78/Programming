//Delete a node at a given position
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

void deletePosition(Node** head, int pos){
    Node* curr = *head;
    Node* prev = NULL;
    if(curr==NULL){
            cout<<"The linked list is already empty!!\n";
            return;
        }
    if(pos==1){        
        *head = curr->next;
        delete curr;
        return;
    }
    for(int i=1;i<pos;i++){
        if(curr->next==NULL){
            cout<<"Not enough elements in the linked list!!\n";
            return;
        }
        prev = curr;
        curr= curr->next;
    }
    prev->next = curr->next;
    delete curr;
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
    int pos;
    cin>>pos;
    deletePosition(&head, pos);
    printLinkedList(head);    
}