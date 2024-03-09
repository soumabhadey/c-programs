#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct node_
{
	int data;
	struct node_ *link;
} node;
typedef struct list_
{
	node *start;
} list;
void append(node **start,int value)
{
	node *nptr, *ptr;
	nptr=(node *)malloc(sizeof(node));
	nptr->data=value;
	nptr->link=NULL;
	if(*start==NULL)
		*start=nptr;
	else
	{
		ptr= *start;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		ptr->link=nptr;
	}
}
void divide(node *start,node **startp,node **startn)
{
	node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->data<0)
			append(startn,ptr->data);
		else
			append(startp,ptr->data);
		ptr=ptr->link;
	}
}
void display(node *start)
{
	node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	puts("");
}
int main()
{
	list l,positive,negative;
	char cont;
	int n;
	clrscr();
	l.start=positive.start=negative.start=NULL;
	puts("Enter numbers separated by newline");
	do
	{
		scanf("%d",&n);
		fflush(stdin);
		append(&l.start,n);
		puts("Do you want to continue? y/n");
		fflush(stdin);
		cont=getchar();
	}while(cont=='y');
	puts("Original list");
	display(l.start);
	divide(l.start,&positive.start,&negative.start);
	puts("Positive list");
	display(positive.start);
	puts("Negative list");
	display(negative.start);
	getch();
	return 0;
}