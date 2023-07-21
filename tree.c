
#include<process.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int no;
    struct node *right;
};

typedef struct node tree;

tree *root,*n;

void insertnode(tree *root,int k)
{
    if(root==NULL)
    {
        n=(tree*)malloc(sizeof(tree));
        n->no=k;
        n->left=n->right=NULL;
    }
    else if(root->no>k)
        insertnode(root->left,k);
    else
        insertnode(root->right,k);
}

void inorder(tree *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            printf("\n\t%d ",root->no);
            inorder(root->right);
        }
    }
void preorder(tree*root)
{
    if(root!=NULL)
    {
        printf("\n\t%d ",root->no);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(tree*root)
{
    if(root!=NULL)  
    {
        postorder(root->left);
        postorder(root->right);
        printf("\n%d",root->no);
    }
}

int main()
{
    int choice,k;

    root=NULL;
        printf("\n1.Insert Value");
        printf("\n2.Inorder");
        printf("\n3.Preorder");
        printf("\n4.Postorder");
        printf("\n5.Exit");
        printf("\n\t\tEnter Your Choice.....");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("\nEnter Value for New Node : ");
            scanf("%d",&k);
                insertnode(root,k);

            break;
            case 2:
                inorder(root);
            break;
            case 3:
                preorder(root);
            break;
            case 4:
                postorder(root);
            break;
            case 5:
                exit(0);
            break;
}
return 0;
}

