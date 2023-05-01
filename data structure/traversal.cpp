#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node*right;
    
    node(int n)
    {
        data=n;
        left=0;
        right=0;
    }
};

void preoder(struct node*root)
{
    if(root==0)
    return;
    
    cout<<root->data<<" ";
    preoder(root->left);
    preoder(root->right);
}

void postorder(struct node*root)
{
    if(root==0)
    return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(struct node*root)
{
    if(root==0)
    return;
        
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



int main()
 {
   struct node *root=new node(11);
  root->left=new node(6);
  root->right=new node(19);
  root->left->left=new node(4);
  root->left->right=new node(8);
  root->left->left->right=new node(5);
  root->left->right->right=new node(10);
   root->right->left=new node(17);
  root->right->right=new node(43);
   root->right->right->left=new node(31);
    root->right->right->right=new node(49);
  
  cout<<"preorder:";
  preoder(root);
  cout<<endl;
  
  cout<<"postorder:";
  postorder(root);
  cout<<endl;
  
  cout<<"inorder:";
   inorder(root);
  cout<<endl;
  
  
  
 
    return 0;
}