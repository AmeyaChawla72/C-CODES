#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    //constructor
    node(int d){
        data=d;
        next=NULL;
    }

};
void insertathead(node*&head,int data){
    node *n= new node(data); 
    n->next=head;
    head=n;
}
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
cout<<endl;
}
void insertattail(node*&head,int data){
    node *temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*n= new node(data);
    temp->next=n;
}
void insertatanyplace(node*&head,int data,int b){
node* temp;
int c=1;
temp=head;
while(c!=b){
    temp=temp->next;
    c++;
}
node *n=new node(data);
node*k;
k=temp->next;
temp->next=n;
n->next=k;
}
void deletenthelemnt(node*head,int n){
    node*temp=head;
    int c=1;
    while(c!=n-1){
        temp=temp->next;
        c++;
    }
    node*k=temp->next->next;
    temp->next=k;

}
int main() {
    node*head=NULL;
insertathead(head,8);
insertathead(head,9);
insertathead(head,7);
print(head);
insertattail(head,3);
print(head);
insertatanyplace(head,6,2);
print(head);
deletenthelemnt(head,3);
print(head);
}
