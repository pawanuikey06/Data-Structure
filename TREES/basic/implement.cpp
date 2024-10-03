#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:  int data;
    
    Node *left;
    Node *right;
    Node(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;

    }

    
};
void inorder(Node* root){
    if(!root) return ;
    inorder(root->left);
    cout<<" "<<root->data;
    inorder(root->right);
}
void Preorder(Node* root){
    if(!root) return ;
    cout<<" "<<root->data;
    inorder(root->left);
    inorder(root->right);
}
void Postorder(Node* root){
    if(!root) return ;
    inorder(root->left);
    
    inorder(root->right);
    cout<<" "<<root->data;
}

void levelOrder(Node *root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* front =q.front();q.pop();
        cout<<front->data<<" ";

        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
}
Node* createTree(){
  cout<<"enter the value"<<endl;
  int data;
  cin>>data;
   if(data==-1) return nullptr;

   Node *root =new Node(data);
 
//    create left subtree;
   root->left=createTree();
   root->right=createTree();
   return root;

// create right subtree

}
int height(Node* root){
    if(!root) return 0;

    int l =height(root->left)+1;
    int r =height(root->right)+1;

    return max(l,r);
}
int main() {
    Node *root = createTree();
    
    cout<<"Inorder Traversal"<<endl;
    inorder(root);
      cout<<endl;
    cout<<"Preorder Traversal"<<endl;
    Preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal"<<endl;
    Postorder(root);

    cout<<endl;
    cout<<"levelorder Traversal"<<endl;
    levelOrder(root);

    cout<<endl;
    cout<<" height of the tree is "<<height(root);

    cout<<endl;
    cout<<"Diameter of the tree is "<<height(root->left)+height(root->right);
    return 0;

}