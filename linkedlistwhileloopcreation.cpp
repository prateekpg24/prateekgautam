#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<iostream>

using namespace std;

struct node
{
	int val;
	struct node *next;
};

struct node *root;
void create();
void print();

int main()
{
	root=NULL;
	create();
	print();
	deletenode();
	return 0;
}

void create()
{
	struct node *temp,*n;
	int data;
	char k='y';
	
	while(k=='y'||k=='Y')
	{
		if(root==NULL)
		{
			root=(struct node *)malloc(sizeof(struct node));
			cout<<"Enter the root node data\n";
			cin>>data;
			root->val=data;
			root->next=NULL;
			temp=root;
		}
		else
		{
			n=(struct node *)malloc(sizeof(struct node));
			cout<<"Enter next node data\n";
			cin>>data;
			n->val=data;
			n->next=NULL;
			temp->next=n;
			temp=n;
		}
		cout<<"Want to add more ? (y/n)\n";
		cin>>k;
	}
}

void print()
{
	struct node *temp=root;
	while(temp==NULL)
	{
	    cout<<"Khaali hai bc !\n";
    }
    cout<<"Linked List you entered is :-\n";
	while(temp!=NULL)
    {
    	cout<<temp->val<<' ';
    	temp=temp->next;
	}
}

