#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};


struct node *header=NULL;

void print()
{	struct node *ptr=header;
	printf("The elements are : ");
	while(ptr!=NULL)
	{
	printf("%d  ",ptr->data);
	ptr=ptr->link;
	}
}


void insertfront(int d)
{
struct node *newptr=(struct node*)malloc(sizeof(struct node));
newptr->data=d;
newptr->link=header;
header=newptr;
}


void insertback(int d)
{
struct node *newptr=NULL;
newptr=header;
while(newptr->link!=NULL)
{
newptr=newptr->link;
}
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=d;
ptr->link=NULL;
newptr->link=ptr;
}



void insertbd(int d,int key)
{
struct node *newptr=NULL;
struct node *newptr1=NULL;
newptr1=header;
newptr=newptr1->link;
while((newptr->data!=key)&&(newptr!=NULL))
{
newptr=newptr->link;
newptr1=newptr1->link;
} 
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=d;
if(newptr==NULL)
{
newptr1=header;
header=ptr;
ptr->link=newptr1;
}
else if((newptr==header->link)&&(newptr1==header)&&(newptr!=NULL))
{
ptr->link=newptr1->link;
newptr1->link=ptr;
}
else
{
ptr->link=newptr1->link;
newptr1->link=ptr;
}
}

int main()
{

int ch,x,y;
while(1)
{
printf("\n\n1.Insertion at head\n2.Insertion at end\n3.Insertion before a data\n4.Insertion after a data\n5.Insertion at a position\n6.Deletion at head\n7.Deletion at end\n8.Deletion before a data\n9.Deletion after a data\n10.Deletion at a position");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:	printf("\nEnter the value to be inserted at front : ");
	scanf("%d",&x);
	insertfront(x);
	print();
	break;
case 2:	printf("\nEnter the value to be inserted at back : ");
	scanf("%d",&x);
	insertback(x);
	print();
	break;
case 3:	printf("\nEnter the value to be inserted and the data before which it should be inserted : ");
	scanf("%d %d",&x,&y);
	insertbd(x,y);
	print();
	break;
case 5:	exit(0);
default:printf("\nWrong choice ");
}
}
}		



