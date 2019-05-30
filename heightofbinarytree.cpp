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
int main() {
node*root=buildtree();
print(root);
cout<<endl<<heigth(root);
}
