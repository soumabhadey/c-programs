#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <stdlib.h>
struct node
{
	struct ffblk data;
	struct node *link;
}
*start;
void append(struct ffblk a);
void sort();
void display();
int count();
int main()
{
	int done;
	struct ffblk a;
	clrscr();
	start=NULL;
	done=findfirst("*.*",&a,0);
	while(!done)
	{
		append(a);
		done=findnext(&a);
	}
	sort();
	display();
	getch();
	return 0;
}
void append(struct ffblk a)
{
	struct node *nptr=(struct node *)malloc(sizeof(struct node)), *ptr;
	nptr->data=a;
	nptr->link=NULL;
	if(start==NULL)
		start=nptr;
	else
	{
		ptr=start;
		while(ptr->link!=NULL)
			ptr=ptr->link;
		ptr->link=nptr;
		nptr->link=NULL;
	}
}
void sort()
{
	struct node *ptr1, *ptr2;
	int i,j,n;
	struct ffblk temp;
	n=count();
	for(i=0;i<n;i++)
	{
		ptr1=start;
		ptr2=start->link;
		for(j=0;j<n-i-1;j++)
		{
			if(strcmpi(ptr1->data.ff_name,ptr2->data.ff_name)>0)
			{
				temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr1=ptr2;
			ptr2=ptr2->link;
		}
	}
}
int count()
{
	struct node *ptr;
	int c;
	ptr=start;
	c=0;
	while(ptr!=NULL)
	{
		c++;
		ptr=ptr->link;
	}
	return c;
}
void display()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		puts(ptr->data.ff_name);
		ptr=ptr->link;
	}
}