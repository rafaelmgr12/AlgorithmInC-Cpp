#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct node
{
    int data;
    struct node *left,*right;
};


struct node *insert(struct node *root,int value)
{
    struct node *p,*t;
    int find; // axu variable to find a node
    p = (struct tree *)malloc (sizeof(struct node));
    p -> value = value;
    p -> right = p-> left = NULL;
    if(!root) // same as if(root==0)
    {
        root = p;
    }
    else{
        find = FALSE;
        t = root;
        while(!find){
            if(!t->left){
                t -> left = p;
                find = TRUE;
            }
            else
            {
                t = t->left;
            }
            if (!t->right){
                t -> right = p;
                find = TRUE;
            }
            else{
                t= t -> right;
            }
            
        }
    }
    return root;
};
