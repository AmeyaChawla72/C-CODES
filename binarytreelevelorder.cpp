#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
void print(node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int heigth(node*root){
    if(root==NULL){
        return 0;
    }
return max(1+heigth(root->left),1+heigth(root->right));
}
void printkthlevel(node*root,int k){
    if(root==NULL){
        return ;
    }
    if(k==1){
        cout<<root->data<<"  ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
}

void printlevelall(node*root){
int k=heigth(root);
for(int i=1;i<=k;i++){
    printkthlevel(root,i);
    cout<<endl;
}
}
int main() {

node*root=buildtree();
printlevelall(root);
}
