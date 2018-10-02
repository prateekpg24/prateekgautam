#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node *create(struct node *a,int n);
void print(struct node *ptr);



struct node
{
	int val;
	struct node *next;
};

struct node *root=NULL;

int main()
{
	int n;
	struct node *temp;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	temp=create(root,n);
	print(root);
	return 0;
}

struct node *create(struct node *a,int n)
{
	int i;
	struct node *temp=NULL;
	struct node *p;
	for(i=0;i<n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter the element at number %d\n",i+1);
		scanf("%d",&temp->val);
		temp->next=NULL;
		
		if(root==NULL)
		{
			root=temp;
		}
		else
		{
			p=root;
			while(p!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
		}
	}
	return root;
}

void print(struct node *ptr)
{
	if(ptr==NULL)
	{
		printf("Khaali hai bc!\n");
	}
	while(ptr!=NULL)
	{
		printf("%d",ptr->val);
		ptr=ptr->next;
	}
}
