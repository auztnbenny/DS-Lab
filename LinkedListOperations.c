#include<stdio.h>
#include<stdlib.h>

void InsertBegining(int);
void InsertEnd(int);
void InsertParticular(int,int);

void DeleteBegining();
void DeleteEnd();
void DeleteParticular(int);

void display();

struct node
{
	int data;
	struct node *ptr;
};
struct node *start;
void main()
{
	int option,value,position;
	printf("\nOperations:\n1.Insertion at Beginning\n2.Insertion at End\n3.Insertion at particular position\n4.Deletion at Beginnig\n5.Deletion at End\n6.Deletion at Particular position\n7.Display\n8.Exit\n");
do
{
	printf("\nEnter your option:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("\nEnter the data:");
			scanf("%d",&value);
			InsertBegining(value);
			display();
			break;
		case 2:
			printf("\nEnter the data:");
			scanf("%d",&value);
			InsertEnd(value);
			display();
			break;	
		case 3:
			printf("\nEnter the data:");
			scanf("%d",&value);
			printf("\nEnter the position:");
			scanf("%d",&position);
			InsertParticular(value,position);
			display();
			break;	
		case 4:
			DeleteBegining();
			display();
			break;
		case 5:
			DeleteEnd();
			display();
			break;
		case 6:
			printf("\nEnter the position:");
			scanf("%d",&position);
			DeleteParticular(position);
			break;
		case 7:
			display();
			break;
		case 8:
			printf("\nExit");
			break;
		default:
			printf("\Enter valid choice");
			break;
	}
}while(option!=8);
}

void InsertBegining(int value)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node*));
	if(start==NULL)
	{
		temp->ptr=NULL;
		temp->data=value;
		start=temp;
	}
	else
	{
		temp->ptr=start;
		temp->data=value;
		start=temp;
	}
}

void InsertEnd(int value)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node *));
	if(start==NULL)
	{
		temp->ptr=NULL;
		temp->data=value;
		start=temp;
	}
	else
	{
		p=start;
		while(p->ptr!=NULL)
		{
			p=p->ptr;
		}
		p->ptr=temp;
		temp->ptr=NULL;
		temp->data=value;
	}
}

void InsertParticular(int value,int position)
{
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node *));
	if(start==NULL)
	{
		temp->ptr=NULL;
		temp->data=value;
		start=temp;
	}
	else
	{
		p=start;
		for(int i=1;i<position-1;i++)
		{
			p=p->ptr;
		}
		temp->ptr=p->ptr;
		p->ptr=temp;
		temp->data=value;
	}
}

void DeleteBegining()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nDeletion not possible");
	}
	else if(start->ptr==NULL)
	{
		temp=start;
		start=NULL;
		printf("\nDeleted item is %d ",temp->data);
		free(temp);
	}
	else
	{
		temp=start;
		start=start->ptr;
		printf("\nDeleted item is %d ",temp->data);
		free(temp);
	}
}

void DeleteEnd()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nDeletion not possible");
	}
	else if(start->ptr==NULL)
	{
		temp=start;
		start=NULL;
		printf("\nDeleted item is %d ",temp->data);
		free(temp);
	}
	else
	{
		struct node *p;
		temp=start;
		p=start->ptr;
		while(p->ptr!=NULL)
		{
			p=p->ptr;
			temp=temp->ptr;
		}
		temp->ptr=NULL;
		printf("Deleted element is %d ",p->data);
		free(p);
	}
}

void DeleteParticular(int position)
{
	struct node *temp,*t;
	temp=(struct node *)malloc(sizeof(struct node *));
	if(start==NULL)
	{
		printf("\nDeletion not possible");
	}
	else if(position=1&&start->ptr==NULL)
	{
		temp=start;
		start=NULL;
		printf("\nDeleted element is %d ",temp->data);
		free(temp);
	}
	else if(position==1)
	{
		temp=start;
		start=start->ptr;
		printf("\nDeleted element is %d ",temp->data);
		free(temp);
	}
	else
	{
		temp=start;
		for(int i=1;i<(position-1);i++)
		{
			temp=temp->ptr;
		}
		t=temp->ptr;
		temp->ptr=t->ptr;
		printf("\nDeleted element is %d ",t->data);
		free(t);
	}
}

void display()
{
	struct node *temp;
	if(start==NULL)
	{
		printf("\nList empty.");
	}
	else
	{
		printf("\nThe linked list is :\n");
		for(temp=start;temp!=NULL;temp=temp->ptr)
		{
			printf("%d ",temp->data);
		}
		printf("\n");
	}
}
	 
	
	
	
	
	
	
