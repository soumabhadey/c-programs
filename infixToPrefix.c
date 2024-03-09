#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char inf[1], *pre, *stack;
int top;
void input();
void convert();
void push(char ab);
char pop();
int priority(char ab);
void display();
int main()
{
	input();
	convert();
	display();
	return 0;
}
void input()
{
	puts("Enter expression");
	gets(inf);
	strrev(inf);
	pre=(char *)malloc(sizeof(inf));
	stack=(char *)malloc(sizeof(inf));
	top=-1;
}
void convert()
{
	char *p=pre, *i=inf;
	while(*i)
	{
		if(*i==32|| *i=='\t')
		{
			i++;
			continue;
		}
		else if(isdigit(*i)||isalpha(*i))
		{
			while(isdigit(*i)||isalpha(*i))
			{
				*p= *i;
				p++;
				i++;
			}
			continue;
		}
		else if(*i==')')
		{
			push(*i);
			i++;
			continue;
		}
		else if(*i=='$'|| *i=='/'|| *i=='%'|| *i=='*'|| *i=='+'|| *i=='-')
		{
			if(top!=-1)
			{
				while(top!=-1&&priority(stack[top])>=priority(*i))
				{
					*p=pop();
					p++;
				}
				push(*i);
			}
			else
				push(*i);
			i++;
			continue;
		}
		else if(*i=='(')
		{
			while(stack[top]!=')')
			{
				*p=pop();
				p++;
			}
			pop();
			i++;
			continue;
		}
	}
	while(top!=-1)
	{
		*p=pop();
		p++;
	}
	*p='\0';
}
void push(char ab)
{
	top++;
	stack[top]=ab;
}
char pop()
{
	top--;
	return stack[top+1];
}
int priority(char ab)
{
	if(ab=='$')
		return 3;
	else if(ab=='/'||ab=='%'||ab=='*')
		return 2;
	else if(ab=='+'||ab=='-')
		return 1;
	else
		return 0;
}
void display()
{
	strrev(pre);
	puts(pre);
	free(stack);
	free(pre);
}