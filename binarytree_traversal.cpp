#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left,*right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
void print_preorder(struct Node *node)
{
   //Algorithm Preorder(tree)
   //1. Visit the root.
   //2. Traverse the left subtree, i.e., call Preorder(left-subtree)
   //3. Traverse the right subtree, i.e., call Preorder(right-subtree) 
   if(node==NULL)
   {
     return;
   }
    
    //print node data
   cout<<node->data<<endl;
   
   
   //traverse leftsubtree through recuursion
   print_preorder(node->left);
   
   //traverse rightsubtree through recursion
   print_preorder(node->right);
  // cout<<"\n";

}
void print_inorder(struct Node *node)
{
    if(node==NULL)
    {
        return;
    }
    print_inorder(node->left);
    
    cout<<node->data<<endl;
    
    print_inorder(node->right);
    //cout<<"\n";
}
void print_postorder(struct Node *node)
{
    if(node==NULL)
    {
        return;
    }
    
    print_postorder(node->left);
    
    print_postorder(node->right);
    
    cout<<node->data<<endl;
    //cout<<"\n";
}
int main() 
{
	
	struct Node *root=new Node(8);
	root->left=new Node(8);
	root->left->left=new Node(7);
	root->left->right=new Node(67);
	root->right=new Node(5);
	root->right->left=new Node(45);
	print_preorder(root);
	print_inorder(root);
	print_postorder(root);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
