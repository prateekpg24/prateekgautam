#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int val;
	struct node *next;
};

struct node *root;
void create(int a);
void display(struct node *ptr);

int main()
{
	int n;
	root=NULL;
	printf("Enter the size of linked list\n");
	scanf("%d",&n);
	create(n);
	display(root);
	modify(root,n);
	return 0;
}

void create(int a)
{
	struct node *temp;
	struct node *p;
	int i,x;
	
	for(i=0;i<a;i++)
	{
		if(root==NULL)
		{
			root=(struct node *)malloc(sizeof(struct node));
			printf("Enter the 1st element\n");
			scanf("%d",&x);
			root->val=x;
			root->next=NULL;
			temp=root;
		}
		else
		{
			p=(struct node *)malloc(sizeof(struct node));
			printf("Enter the next element\n");
			scanf("%d",&x);
			p->val=x;
			p->next=NULL;
			temp->next=p;
			temp=p;
		}
	}
}

void display(struct node *ptr)
{
	struct node *temp=ptr;
	printf("The linked list you have entered is :-\n");
	while(ptr!=NULL)
	{
		printf("%d ",ptr->val);
		ptr=ptr->next;
	}
}
