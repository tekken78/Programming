#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    char data;
    Node* next;
    Node(char c){
        data = c;
        next = NULL;
    }
};

void checkPalindrome(Node** head){
    Node* curr = *head;
    stack<char> s;
    while(curr!=NULL){
        s.push(curr->data);
        curr= curr->next;
    }
    curr = *head;
    while(curr!=NULL){
        if(curr->data != s.top()){
            cout<<"Not a palindrome!!"<<endl;
            return;
        }
        curr=curr->next;
        s.pop();
    }
    cout<<"The linked list is a palindrome!!"<<endl;
}

void push(Node** head, char c){
    Node* new_node = new Node(c);
    new_node->next = (*head);
    (*head) = new_node; 
}

int main(){
    Node* head = NULL;
    push(&head, 'R');
    push(&head, 'A');
    push(&head, 'D');
    push(&head, 'A');
    push(&head, 'R');

    checkPalindrome(&head);
}