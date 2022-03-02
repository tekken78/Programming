#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

void printInorderTraversal(Node* node){
    if(node==NULL)
    return;
    printInorderTraversal(node->left);
    cout<<node->data<<" ";
    printInorderTraversal(node->right);
}

void printPreorderTraversal(Node* node){
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    printPreorderTraversal(node->left);
    printPreorderTraversal(node->right);
}

void printPostorderTraversal(Node* node){
    if(node==NULL)
    return;
    printPostorderTraversal(node->left);
    printPostorderTraversal(node->right);
    cout<<node->data<<" ";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"The inorder traversal for the tree is: \n";
    printInorderTraversal(root);
    cout<<endl;

    cout<<"The preorder traversal for the tree is: \n";
    printPreorderTraversal(root);
    cout<<endl;

    cout<<"The postorder traversal for the tree is: \n";
    printPostorderTraversal(root);
    cout<<endl;

}