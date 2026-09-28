#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:

    int data;
    node* right;
    node* left;
    

    node(int value)
    {
        data = value;
        right = nullptr;
        left = nullptr;

    }


};

void inorder(node* root)
{

    if(root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}


void preorder(node* root)
{

    if(root == nullptr)
    {
        return;
    }

     cout<< root->data << " ";
    inorder(root->left);
   
    inorder(root->right);
}


void postorder(node* root)
{

    if(root == nullptr)
    {
        return;
    }

    inorder(root->left);
    
    inorder(root->right);
    cout<< root->data << " ";
}

void levelorder(node* root)
{
    if(root == nullptr)
    {
        return;
    }

    queue<node*> q;

    q.push(root);

    while (!q.empty())
    {
        node* current = q.front();
        q.pop();

        cout<< current->data <<" ";

        if(current->left != NULL)
        {
            q.push(current->left);
        }

         if(current->right != NULL)
        {
            q.push(current->right);
        }
    }
    
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right  = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout<<"inorder: "<<endl;
    inorder(root);

    cout<<"\npreorder: "<<endl;
    preorder(root);

     cout<<"\npostorder: "<<endl;
    postorder(root);

    cout<<"\nlevelorder: "<<endl;
    levelorder(root);

    return 0;
}