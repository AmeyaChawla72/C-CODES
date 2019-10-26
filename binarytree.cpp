#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildtree(){
    int d;
    cin>>d;
    if(d!=-1){
       
    
    node*root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
            int d;
    cin>>d;
    }
    else{return NULL;}
}
void print(node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main() {
node*root=buildtree();
print(root);
}
