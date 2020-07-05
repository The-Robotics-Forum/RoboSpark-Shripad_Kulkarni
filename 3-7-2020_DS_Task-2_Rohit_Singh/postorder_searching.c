#include<stdio.h>
#include <stdlib.h>
#include<string.h>

struct node
{
    int data; 
    struct node *right_child;
    struct node *left_child; 
};
// searching
struct node* search(struct node *root, int x)
{   //to find the element 
    if(root==NULL || root->data==x)
        return root;
    else if(x>root->data) // search the right subtree
        return search(root->right_child, x);
    else // search the left subtree
        return search(root->left_child,x);
}
//function to create a node
struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}
//inserting
struct node* insert(struct node *root, int x)
{
    //inserting
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) // inserting right
        root->right_child = insert(root->right_child, x);
    else // inserting left
        root->left_child = insert(root->left_child,x);
    return root;
}

// //inorder
// void inorder(struct node *root)
// {   //if null?
//     if(root!=NULL) 
//     {
//         inorder(root->left_child); // left
//         printf(" %d ", root->data); // data
//         inorder(root->right_child);// right
//     }
// }

//postorder
void postorder(struct node *root)
{   //is null?
    if(root!=NULL) 
    {
        postorder(root->left_child); // left 
        postorder(root->right_child);// right 
        printf(" %d ", root->data); // data
    }
}

int main()
{
    struct node *root;
    int arr[100];

    int count;
    //total num of elements
    printf("\nEnter the total number of elements : ");
    scanf("%d", &count);

    //inputting elements
    printf("\nEnter the elements in a tree : \n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    //creating nodes
    for (int j = 0; j < count; j++)
    {
        if (j==0)
        {   
            root = new_node(arr[j]);
        }
        else
        {
            insert(root, arr[j]);
        }   
    }

    // printf("The inorder is : ");
    // inorder(root);
    // printf("\n");
    printf("The postorder is : ");
    postorder(root);
    printf("\n");
 
    int a;
    //searching element
    printf("Enter a number to search in bst : ");
    scanf("%d", &a);

    //searching
    if (search(root, a)==0)
    {
        printf("The number %d is NOT present in the BST", a);
    }
    else
    {
        printf("YES the number %d is present in the BST", a);
    }

    return 0;
}