#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node * createnodes(int n);
void printnodes(struct node *p);

struct node
{
	int id;
	struct node *next;
};

int main()
{
	int N,Q;
	struct node *temp;
	printf("Enter N\n");
	scanf("%d",&N);
	printf("Enter Q\n");
	scanf("%d",&Q);
	temp=createnodes(N);
	printnodes(temp);
	return 0;
}

struct node * createnodes(int n)
{
	int i;
	struct node *temp=NULL;
	struct node *head=NULL;
	struct node *ptr=NULL;
	for(i=0;i<n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter the value of node number %d\n",i+1);
		scanf("%d",temp->id);
		temp->next=NULL;
		
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
			ptr=head;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
	}
	return head;
}

void printnodes(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->id);
		p=p->next;
	}
}
