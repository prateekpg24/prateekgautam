#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node *create(int n);
void print(struct node *ptr);

struct node 
{
	char val;
	struct node *next;
};

int main()
{
	int n;
	struct node *temp;
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	temp=create(n);
	print(temp);
	return 0;
}

struct node *create(int n)
{
	int i;
	char array[100];
	struct node *head=NULL;
	struct node *p=NULL;
	for(i=0;i<n;i++)
	{
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		printf("Start entering characters\n");
		scanf("%c",&temp->val);
				
		if(head==NULL)
		{
			head=temp;
			head->next=NULL;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
		}
	}
	return head;
}

void print(struct node *ptr)
{
	if(ptr==NULL)
	{
		printf("Empty\n");
	}
	else
	{
		while(ptr->next!=NULL)
		{
			printf("%c ",ptr->val);
			ptr=ptr->next;
		}
	}
}
