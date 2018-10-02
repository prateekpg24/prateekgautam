#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct stack
{
	int top;
	unsigned capacity;
	int *array;
};

int createstack(int n);
void push(struct stack stack,int n);
int pop(struct stack s,int n);

int main()
{
	int n;
	struct stack *s;
	printf("Enter the capacity of stack\n");
	scanf("%d",&n);
	s=createstack(n);
	return 0;
}

int createstack(int n)
{
	struct stack *stack=(struct stack *)malloc(sizeof(struct stack));
	stack->top=-1;
	stack->capacity=n;
	stack->array=(int *)malloc(stack->capacity*sizeof(int));
	return stack;
}

void push(struct stack stack,int n)
{
	if(isfull(stack)==-1)
	{
		printf("Bhara hua hai bhai\n");
	}
	else if(stack->top==-1)
	{
		stack->top=n;
		printf("First element added\n");
	}
	else
	{
		stack->array[++stack->top];
		printf("Sucessfully pushed in the stack\n");
	}
}

int isfull(struct stack s)
{
	if(s->top==s->capacity)
	return -1;
}
