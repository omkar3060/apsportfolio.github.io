#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left, *right;
};
typedef struct tree TREE;

TREE *insert_into_bst(TREE *root, int data)
{
    TREE *newnode = (TREE *)malloc(sizeof(TREE)), *curr = root, *par = NULL;
    if (newnode == NULL)
    {
        printf("Memory Allocation failed\n");
        return root;
    }
    else
    {
        newnode->data = data;
        newnode->left = newnode->right = NULL;
        if (root == NULL)
        {
            return newnode;
        }
        while (curr)
        {
            par = curr;
            if (curr->data > newnode->data)
                curr = curr->left;
            else
                curr = curr->right;
        }
        if (par->data > newnode->data)
        {
            par->left = newnode;
        }
        else
            par->right = newnode;
        return root;
    }
}

TREE *delete_from_bst(TREE *root, int data)
{
    if (root == NULL)
    {
        printf("Empty tree!");
        return root;
    }
    TREE *curr, *parent, *succ, *p;
    curr = root;
    parent = NULL;
    while (curr && curr->data != data)
    {
        parent = curr;
        if (data < curr->data)
        {
            curr = curr->left;
        }
        else
            curr = curr->right;
    }
    if (curr == NULL)
    {
        printf("Data not found");
        return root;
    }
    if (curr->left == NULL)
        p = curr->right;
    else if (curr->right == NULL)
        p = curr->left;
    else
    {
        succ = curr->right;
        while (succ->left)
            succ = succ->left;
        succ->left = curr->left;
        p = curr->right;
    }
    if (parent == NULL)
    {
        free(curr);
        return p;
    }
    if (curr == parent->left)
        parent->left = p;
    else
        parent->right = p;
    free(curr);
    return root;
}

void inorder(TREE *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

int main()
{
    TREE *root = NULL;
    root = insert_into_bst(root, 2);
    root = insert_into_bst(root, 1);
    root = insert_into_bst(root, 4);
    root = insert_into_bst(root, 3);
    root = insert_into_bst(root, 6);
    root = delete_from_bst(root, 2);
    inorder(root);
    return 0;
}
