#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
    }
};

int findLength(Node* head){
    if(head==NULL)
    return 0;
    else return 1+findLength(head->next);
}

void push(Node** head, int n){
    Node* new_node = new Node(n);
    new_node->next = (*head);
    (*head) = new_node; 
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
    int length = findLength(head);
    cout<<"Length: "<<length<<endl;    
}