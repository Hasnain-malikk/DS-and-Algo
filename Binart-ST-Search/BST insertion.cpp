#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node* createNode(int value)
{
    struct node* temp = new node();
    temp -> data = value;
    temp -> left = NULL;
    temp -> right = NULL;
    return temp;
} 

struct node* insert(struct node* n, int key)
{
    //if tree is empty
    if(n == NULL)
    {
        return createNode(key);
    }

    //if key is smaller than node which is being checked
    if(key < n -> data)
    {
        n -> left = insert(n -> left, key);
    }

    else if( key > n -> data)
    {
        n -> right = insert(n -> right, key);
    }

    return n;
}

void preOrder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<< root -> data <<" ";
    preOrder(root -> left);
    preOrder(root -> right);
}
int main()
{
    struct node* root = NULL;
    
    root=insert(root,30);
    root=insert(root,70);
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,60);
    root=insert(root,80);

    preOrder(root);
}
