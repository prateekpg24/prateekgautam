#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int val;
	struct node *left;
	struct node *right;
};

struct node *root;
struct node  *new_node(int n);
void inorder(struct node *p);
void preorder(struct node *p);
void postorder(struct node *p);

int main()
{
	root=new_node(1);
	root->left=new_node(2);
	root->right=new_node(3);
	root->left->left=new_node(4);
	root->left->right=new_node(5);
	inorder(root);
	preorder(root);
	postorder(root);
	return 0;
}

struct node *new_node(int n)
{
	struct node *p=(struct node *)malloc(sizeof(struct node *));
	p->val=n;
	p->left=NULL;
	p->right=NULL;
	return p;
}

void inorder(struct node *p)
{
	
}
