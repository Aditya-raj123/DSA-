#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int product(Node* root){
    if(root==NULL) return 1;
    return root->val * product(root->left)* product(root->right);
}
int minval(Node* root){
    if(root ==NULL) return INT_MAX;
    int lmin= minval(root->left);
    int rmin= minval(root->right);
    return min(root->val,min(lmin,rmin));
}
int main(){
    // here a is the root
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(9);
     
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    display(a);
    cout<<endl;
    cout<<product(a);
    cout<<endl;
    cout<<minval(a)<<endl;




    return 0;

}