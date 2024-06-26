// inserting a linked list at the end
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
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;

        }
        size++;
    }
     void insertathead(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;

        }
        size++;
    }
      void insertatidx(int idx,int val){
       if(idx<0 || idx>size) cout<<"invalid";
      else if(idx==0) insertathead(val);
      else if (idx==size) insertattail(val);
        else{
          Node* t = new Node(val);
          Node* temp = head;
          for(int i=1;i<idx-1;i++){
            temp=temp->next;
          }
          t->next=temp->next;
          temp->next=t;
           size++;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertattail(10);
    ll.display();
    ll.insertattail(20);
    ll.display();
    ll.insertattail(30);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertattail(70);
    ll.display();
    ll.insertattail(00);
    ll.display();
    ll.insertathead(67);
    ll.display();
    ll.insertathead(767);
    ll.display();
    ll.insertatidx(4,98);
    ll.display();
    return 0;
}