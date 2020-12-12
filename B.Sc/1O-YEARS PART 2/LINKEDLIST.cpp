#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<process.h>
void create();
void display();
void insert();
void insert_first();
void insert_given_position();
void insert_last();
void delet();
void delet_first();
void delet_given_position();
void delet_last();
void scarch();
struct node
{
  int data;
  struct node *add;
}*head,*temp,*temp1,*temp2,*temp3;
void main()
{
	int c;
	while(1)
	{
		printf("\n1 for create:\n2 for display:\n3for insert:\n4 for delete:\n5 for scarch:\nEnter your chose:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
						create();
						break;
			case 2:
						display();
						break;
			case 3:
						insert();
						break;
			case 4:
						delet();
						break;
			case 5:
						scarch();
						break;
			default :
						exit(0);
		}
	}
}
void create()
{
  int v;
	if(head==NULL)
	  {
		 head=(node*)malloc(sizeof(node));
		 printf("\n enter a number:");
		 scanf("%d",&v);
		 head->data=v;
		 head->add=NULL;
	  }
	  else
	  {
		 temp=head;
		 while(temp->add!=NULL)
		 {
			temp=temp->add;
		 }
		 temp1=(node*)malloc(sizeof(node));
		 printf("\n enter a data:");
		 scanf("%d",&v);
		 temp1->data=v;
		 temp1->add=NULL;
		 temp->add=temp1;
	  }
}
void display()
{
  printf("\n the output \n");
  temp1=head;
  while(temp1!=NULL)
	 {
		printf("[%d]->",temp1->data);
		temp1=temp1->add;
	 }
 }

void insert()
{
	int ch;
	printf("Enter \n1 for first:\n2 for at given position:\n3 for last:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
				 insert_first();
				 break;
		case 2:
				 insert_given_position();
				 break;
		case 3:
				 insert_last();
				 break;
	}
}
void delet()
{
  int ch;
  printf("\n enter 1: for delete from 1st\n 2: for delete from last\n 3: for delete from a given position");
  printf("\n enter your choise:");
  scanf("%d",&ch);
  switch(ch)
	 {
		case 1:
				delet_first();
				break;
		case 2:
				delet_last();
				break;
		case 3:
				delet_given_position();
				break;
	 }
  }
void insert_first()
  {
	 int v;
	 if (head==NULL)
		{
		  printf("\n no node present");
		}
		else
		 {
			temp1=(node*)malloc(sizeof(node));
			printf("\n enter a no:");
			scanf("%d",&v);
			temp1->data=v;
			temp1->add=head;
			head=temp1;
		 }
  }
void insert_last()
{
 int v;
 if(head==NULL)
	{
	  printf("\nno node present create first");
	}
	else
	{
	 temp1=head;
	 while(temp1->add!=NULL)
	  {
		 temp1=temp1->add;
	  }
		temp2=(node*)malloc(sizeof(node));
		printf("\n enter a no:");
		scanf("%d",&v);
		temp2->data=v;
		temp2->add=NULL;
		temp1->add=temp2;
	 }
 }
void insert_given_position()
  {
	 int v;
	 if(head==NULL)
	  {
		 printf("\n no node present");
	  }
	  else
		{
		  int p,v;
		  printf("\n enter a position:");
		  scanf("%d",&p);
		  temp1=head;
		  while(p>1)
			{
			  temp1=temp->add;
			  temp2=temp1->add;
			  p--;
			}
		temp3=(node*)malloc(sizeof(node));
		printf("\n enter a no:");
		scanf("%d",&v);
		temp3->data=v;
		temp3->add=temp2;
		temp1->add=temp3;
	 }
  }

void delet_first()
 {
 int v;
	if(head==NULL)
	 {
		printf("\n list os empty");
	 }
	else
	 {
		temp1=head;
		head=head->add;
		temp->add=NULL;
		printf("\n %d is deleted",temp->data);
		free(temp1);
	 }
 }
void delet_last()
{
  if (head==NULL)
	{
	  printf("\n list is empty");
	}
  else
  {
	temp1=head;
	while(temp1->add!=NULL)
	 {
		temp2=temp1;
		temp1=temp1->add;
	 }
	 printf("%d deleted",temp->add);
  }
}
void delet_given_position()
 {
	if(head==NULL)
	 {
		printf("\n list is empty");
	 }
	 else
	 {
		int n;
		printf("\n enter a point");
		scanf("%d",&n);
		temp1=head;
		while((n>1)&&(temp1->add!=NULL))
		 {
			temp2=temp1;
			temp1=temp->add;
			n--;
		 }
		 temp2->add=temp1->add;
		 temp1->add=NULL;
		 printf("%d is deleted",temp1->data);
		 free(temp1);
	 }
 }
 void scarch()
 {
	if(head=NULL)
	  {
		 printf("\n list os empty");
	  }
	 else
	  {
		 int s,f=0,c=0;
		 printf("\n enter a scarching element:");
		 scanf("%d",&s);
		 temp1=head;
		 while(temp1!=NULL)
		  {
			 if(temp1->data==s)
			  {
				 f=1;
				 break;
			  }
			  c++;
			temp1=temp1->add;
		  }
		  if(f==1)
			{
			 printf("|n data found at the position :%d",c+1);
			}
			else
			  {
				 printf("\n data not found");
			  }
  }
 }

