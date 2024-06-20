#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
// calling recursevly
void display(Node* head){
    if(head == NULL) return;
    // printing in the reverse order
    display(head->next);
    cout<<head->val<<" ";
//     display(head->next);
}
int size(Node* head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){
    n++;
    temp=temp->next;
    }
    return n;

}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(90);
    a->next=b;
    b->next=c;
    c->next=d;
    // d->next=e;
    display(a);
    cout<<endl;
    // finding the size of the ll
    cout<<"size of the linked list is :";
    cout<<size(a);
    return 0;

}