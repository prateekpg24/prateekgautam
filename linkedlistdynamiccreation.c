#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void createnewlinkedlist();

struct node
{
	int val;
	struct node *next;
};

int main()
{
	createnewlinkedlist();
	return 0;
}

void createnewlinkedlist()
{
	int b,k;
	char a;
	struct node *temp;
	printf("Enter the first value\n");
	scanf("%d",&k);
	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->val=k;
	head->next=NULL;
	temp=head;
	label:
	printf("Want to add more?\n");
	scanf("%c",&a);
	if(a=='y')
	{
		printf("Enter value\n");
		scanf("%d",&b);
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->val=b;
		temp->next=newnode;
		newnode->next=NULL;
		temp=newnode;
		goto label;
    }
    else
    {
    	printf("LinkedList created !\n");
	}
}
