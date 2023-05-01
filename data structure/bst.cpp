// C++ program bst.
#include <iostream>

using namespace std;

struct Node {

int key;

 Node *left;
Node*right;
};

// A utility function to create a new BST node
Node* gettingnewNode(int item)
{
Node* temp = new Node;

temp->key = item;

temp->left = temp->right = NULL;

return temp;
}


/* A utility function to insert a new node with given key in
 * BST */

Node* insert(Node* node, int key)
{
/* If the tree is empty, return a new node */
if (node == NULL)
return gettingnewNode(key);
/* Otherwise, recur down the tree */

if (key < node->key)

node->left = insert(node->left, key);

else

node->right = insert(node->right, key);

/* return the (unchanged) node pointer */

return node;
}


// Driver Code
int main()
{


Node* root = NULL;


root=insert(root,6);
insert(root,3);
insert(root,2);
insert(root,1);
insert(root,8);
insert(root,9);
//cout<<root->key;

return 0; 
}