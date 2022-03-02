#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        bool isVisited;
    Node(int d){
        data = d;
        next = NULL;
        isVisited = false;
    }
};

void push(Node** head, int n){
    Node* new_node = new Node(n);
    new_node->next = (*head);
    (*head) = new_node; 
}

void detectLoop(Node** head){
    Node* curr = *head;
    while(curr!=NULL){
        if(curr->isVisited){
            cout<<"Loop Detected"<<endl;
            return;
        }
        curr->isVisited = true;
        curr= curr->next;
    }
    cout<<"Loop not found"<<endl;
}

int main(){
    Node* head = NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    //Create a loop for testing
    head->next->next->next->next= head;

    detectLoop(&head);
}