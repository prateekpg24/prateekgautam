#include<stdio.h>
#include<stdlib.h>

struct node 
{
	struct node *left,*right;
	int key;
};

void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
struct node *root=NULL;
struct node *new_node(int data);
struct node *insert(struct node *root,int item);
struct node *delete_node(struct node *root,int item);
struct node *inordersuccessor(struct node *node);

int main()
{
	root=insert(root,50);
	insert(root,70);	
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,60);
	insert(root,80);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
	root=delete_node(root,50);
	printf("\n");
	inorder(root);
	
	return 0;
}

struct node *insert(struct node *root,int item)
{
	if(root==NULL)
	{
		return new_node(item);
	}
	else if(item<root->key)
	{
		root->left=insert(root->left,item);
	}
	else 
	{
		root->right=insert(root->right,item);
	}
}

struct node *new_node(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->left=NULL;
	temp->right=NULL;
	temp->key=data;
	return temp;
}

void inorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%d ",root->key);
	inorder(root->right);
}

void preorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%d ",root->key);
	inorder(root->left);	
	inorder(root->right);
}

void postorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	inorder(root->right);
	printf("%d ",root->key);	
}

struct node *delete_node(struct node *root,int item)
{
	if(root==NULL)
	{
		return;
	}
	if(item<root->key)
	{
		root->left=delete_node(root->left,item);
	}
	else if(item>root->key)
	{
		root->right=delete_node(root->right,item);
	}
	else
	{
		if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
		}
		if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
		struct node *temp=inordersuccessor(root->right);
		root->key=temp->key;
		root->right=delete_node(root->right,temp->key);
	}
	return root;
	
}

struct node *inordersuccessor(struct node *node)
{
	struct node *current=node;
	while(current->left!=NULL)
	{
		current=current->left;
	}
	return current;
}
