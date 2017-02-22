#include<stdio.h>
int main()
{
	int a[100],b[100],n,i,f,j,l,k=0,flag=0;
	printf("\nEnter the no. of elements of the array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element : ");
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
	for(i=0;i<n;i++)
	{f=0;
		for(l=0;l<k;l++)
		{
		if(a[i]==b[l])
		flag=1;
		}
		while(flag==0)
		{
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
			f++;
			b[k]=a[j];
			}
		flag=0;
		}
		k++;		
		}		
		if(f>1)
		printf("\n%d occurs %d times ",a[i],f);
	}

}		
