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
node * reverse(node*&head){
    if(head==NULL || head ->next==NULL){
        return head;
    }
    node*temp=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}
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
void deletenthelemnt(node*&head,int n){
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
while(1){
    int n;
    cin>>n;
    if(n==-1){
        break;
    }
    else{
       insertathead(head,n);
    }
}
print(head);
print(reverse(head));
}

