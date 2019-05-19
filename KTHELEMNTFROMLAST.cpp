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
node*reverse1=reverse(head);
int n=3;
node*temp=reverse1;
n--;
while(n--)
{
    temp=temp->next;
}
cout<<temp->data;
}

