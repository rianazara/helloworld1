#include<stdio.h>
#include<string.h>
void main()
{
char s[25],s1[5],s2[5];
int i=0,j=0,k;
printf("Enter the string :");
gets(s);
printf("Enter the string to be replaced :");
gets(s1);
printf("Enter the new string to be replaced with :");
gets(s2);
for(i=0;i<strlen(s);i++)
{
	if(s[i]==s1[j])
	{j++;}
	else
	j=0;
	if(j==strlen(s1))
	{
	i=i-j+1;
	j=0;
	for(k=0;k<strlen(s2);k++)
	{
	s[i++]=s2[k];
	}
	}
}
printf("\nThe modified string is :");
for(i=0;i<strlen(s);i++)
{
printf("%c",s[i]);
}
}


