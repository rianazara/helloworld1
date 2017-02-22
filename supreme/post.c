#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int s[15],top=0;
void push(int a)
{
s[++top]=a;
}

int pop()
{
if(top<=0)
printf("\nError");
return(s[top--]);
}

void main()
{
char str[15],item,op;
int x,y,i=0,val=0;
printf("\nEnter the postfix expression : ");
gets(str);
item=str[i];
str[strlen(str)]='#';
while(item!='#')
	{
	if(item>='0' && item<='9')
	{
	item=item-48;		
	push(item);
	}
	else
	{
		op=item;
		x=pop();
		y=pop();
		switch(op)
		{
		case '+':push(x+y);
			break;
		case '-':push(x-y);
			break;
		case '*':push(x*y);
			break;
		case '/':push(x/y);
			break;
		}
	}
	item=str[++i];
	}
val=pop();
printf("\nThe value of the postfix expression is : %d",val);
}
