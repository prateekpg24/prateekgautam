#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void printlist(struct node *head);
void addinbetween(struct node *prev,int a);
void addinfront(struct node *head,int a);
void addinlast(struct node *head,int a);
void deletekey(struct node *head,int a);

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));        //we have declared 3 pointers which now points towards the physcial memory of 3 nodes
	struct node *second=(struct node*)malloc(sizeof(struct node));
	struct node *third=(struct node*)malloc(sizeof(struct node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=NULL;
	
	addinbetween(second,4);
	addinfront(head,7);
    addinlast(head,8);
    deletekey(head,2);
	printlist(head);
	return 0;
	
}

void printlist(struct node *head)
{
	if(head==NULL)
	printf("NULL Linked list\n");
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

void addinbetween(struct node *prev,int a)
{
	if(prev==NULL)
	addinlast(prev,a);
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=a;
	new_node->next=prev->next;
	prev->next=new_node;
}

void addinfront(struct node *head,int a)
{
	if(head==NULL)
	{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	head=new_node;
	new_node->next=NULL;
	}
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=a;
	new_node->next=head;
	head=new_node;
}

void addinlast(struct node *head,int a)
{
	struct node *temp=head;
	if(head==NULL)
	{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	head=new_node;
	new_node->next=NULL;
	}
	struct node *new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=a;
	while(temp!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	new_node->next=NULL;
}

void deletekey(struct node *head,int a)
{
	struct node *temp=head;
	struct node *prev;
	if(head==NULL)
	printf("Already empty\n");
	if(temp->data==a)
	{
		temp->next=head;
		free(temp);
	}
	while(temp->data!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
}
	
