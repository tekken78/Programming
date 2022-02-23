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

void removeDuplicates(Node** head){
    unordered_set<int> s;
    Node* curr = *head;
    Node* prev = *head;
    while(curr != NULL){
        if(s.find(curr->data)!=s.end()){
            prev->next = curr->next;
            delete(curr);
        }
        else{
            s.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
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
    removeDuplicates(&head);
    printLinkedList(head);
    
}