#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

void insertInBeginning(Node** head, int n){
    Node* new_node = new Node(n);
    new_node->next = (*head);
    (*head) = new_node;    
}

void insertAtEnd(Node** head, int n){
    Node* new_node = new Node(n);
    Node* last = (*head);
    if(last==NULL){
        *head = new_node;
        return;
    }
    while(last->next !=NULL){
        last= last->next;
    }
    last->next = new_node;
    return;
}

void insertAtPosition(Node** head, int pos, int n){
    Node* new_node = new Node(n);
    Node* temp = *head;
    for(int i=1;i<pos-1;i++){
        cout<<"hello"<<endl;
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next= new_node;
    return;
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
    cout<<"1. Print Linked List \n2. Insert in the begining \n3. Insert at end \n4. Insert at a particular position \n5. STOP \n";
    int choice;
    cin>>choice;
    if(choice==5)
    break;
    int n;
    switch(choice){
        case 1: printLinkedList(head);
            break;
        case 2:
            cin>>n; 
            insertInBeginning(&head, n);
            break;
        case 3: 
            cin>>n;
            insertAtEnd(&head, n);
            break;
        case 4:
            int pos;
            cin>>pos>>n;
            insertAtPosition(&head, pos, n);
            break;
        default:
        break;
        }
    }    
}