#include<iostream>
using namespace std ;

class node
{
    public:
    int data;
    node* right;
    node* left;

    node(int value)
    {
        data = value;
        right =  NULL;
        left =  NULL;
        
    }
};

node* insert(node* root,int value)
{
    if(root == NULL)
    {
        return new node(value);
    }

    if(value < root->data)
    {
        root->left = insert(root->left,value);


    }

    else if(value > root->data)
    {
        root->right = insert(root->right,value);
    }

    return root;

} 

void inorder (node* root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

int main()
{
    node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
