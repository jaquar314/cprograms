#include<stdio.h>
#include<stdlib.h>
/*Node in tree structure*/
struct bst
{
    struct bst* left;   //pointer to left node
    struct bst* right;  //pointer to right node
    int data;
};
void createBST(struct bst** root,int data)
{
    /*Create a temporary node with left and right child as NULL*/
    struct bst* temp =(struct bst*)malloc(sizeof(struct bst));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    /* pointer used to traverse the tree*/
    struct bst* t = *root;
 
    /*Create head if first node*/
    if(*root==NULL)
    {
        *root = temp;
        return;
    }
    if(data<t->data)                //given data is smaller than current node
        createBST(&(t->left),data); //traverse along left side
    else                            //given data is larger than current node
        createBST(&(t->right),data); //traverse along right side
 
}
void traverse(struct bst* root)
{
    if(root!=NULL)
    {
        /*traverse till leftchild is not NULL*/
        traverse(root->left);
        /*traverse till rightchild is not NULL*/
        traverse(root->right);
        /*print data of node*/
        printf("%d\n",root->data);
    }
}
 
int main()
{
    struct bst* root =NULL;
    int i,n,data;
    printf("enter no. of elements");
    scanf("%d",&n);
    /*get n elements from user and create Binary Search Tree*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        createBST(&root,data);
    }
    traverse(root);                 //Pass the root pointer to traverse the tree
}