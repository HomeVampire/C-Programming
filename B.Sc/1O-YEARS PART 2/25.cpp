#include<stdio.h>
#include<process.h>
#define max 10
int stack[10];
int top=-1;
void push();
void pop();
void display();
void main()
{
	int ch;
	while(1)
	{
		printf("\n1 for push:\n2 for pop:\n3 for display: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					 push();
					 break;
			case 2:
					 pop();
					 break;
			case 3:
					 display();
					 break;
			default:
					 exit(0);
		}
	}
}
void push()
{
	if(top==max-1)
	{
		printf("\nstack is full");
	}
	else
	{
		int item;
		printf("\nEnter a number:   ");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		int del;
		del=stack[top];
		printf("\nEnter a number:%d",del);
		top=top-1;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
		printf("\n[%d]",stack[i]);

	}
}

