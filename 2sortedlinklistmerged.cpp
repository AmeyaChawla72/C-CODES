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
void buildtree(node*&head){
    int n;
    cin>>n;
    while(n!=-1){
        insertathead(head,n);
        cin>>n;
    }
}
node * reverse(node*&head){
    if(head==NULL || head ->next==NULL){
        return head;
    }
    node*temp=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}
node * merged(node*a,node*b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node*c;
    if(a->data<b->data){
        c=a;
        c->next=merged(a->next,b);
    }
    else{
        c=b;
        c->next=merged(a,b->next);
    }
return c;
}
int main() {
    node *head=NULL;
    node*head2=NULL;
    buildtree(head);
    head=reverse(head);
    print(head);
    buildtree(head2);
    head2=reverse(head2);
    print(head2);
    node*merged1=NULL;
merged1 = merged(head,head2);
  print(merged1);
}
