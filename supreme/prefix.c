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
char str[15],str2[15],item,op;
int x,y,i=0,val=0;
printf("\nEnter the prefix expression : ");
gets(str);
for(i=0;i<strlen(str);i++)
str2[i]=str[strlen(str)-1-i];
str2[i]='#';
i=0;
item=str2[i];
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
	item=str2[++i];
	}
val=pop();
printf("\nThe value of the prefix expression is : %d",val);
}
