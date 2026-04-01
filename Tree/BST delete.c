#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->info  = value;
    newNode->left  = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node *root, int value)
{
    if (root == NULL)        return createNode(value);
    if (value < root->info)  root->left  = insert(root->left,  value);
    if (value > root->info)  root->right = insert(root->right, value);
    return root;
}

struct Node* deleteNode(struct Node *root, int value)
{
    if (root == NULL)
    {
        printf("%d not found in the tree!\n", value);
        return NULL;
    }

    if (value < root->info)
    {
        root->left  = deleteNode(root->left,  value);
    }
    else if (value > root->info)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            printf("Deleting %d (Case A: leaf node)\n", value);
            free(root);
            return NULL;
        }

        else if (root->left == NULL)
        {
            printf("Deleting %d (Case B: has right child only)\n", value);
            struct Node *temp = root->right;
            free(root);
            return temp;
        }


        else if (root->right == NULL)
        {
            printf("Deleting %d (Case B: has left child only)\n", value);
            struct Node *temp = root->left;
            free(root);
            return temp;
        }
    }

    return root;
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    printf("Before deletion: ");
    inorder(root);
    printf("\n");

    root = deleteNode(root, 20);

    printf("After deleting 20: ");
    inorder(root);
    printf("\n");

    root = deleteNode(root, 30);

    printf("After deleting 30: ");
    inorder(root);
    printf("\n");

    return 0;
}
