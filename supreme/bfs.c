#include<stdio.h>
int q[20],vis[20],st[20],top=0,front=0,rear=0,a[20][20];
void main()
{
int n,i,j,ch;
printf("\nEnter the no. of vertices : ");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{
	printf("\nEnter 1 if %d has a link with %d else n",i,j);
	scanf("%d",&a[i][j]);
	}
	}
printf("\nTHE ADJACENCY MATRIX IS : ");
for(
while(1)
{
for(i=1;i<=n;i++)
vis[i]=0;
printf("\n\nMENU\n1.BFS\n2.DFS\n3.EXIT\n\nEnter your choice : ");
scanf("%d",&ch);
printf("\nEnter the vertex : ");
scanf("%d",&v);
switch(ch)
	{
	case 1:	bfs(v,n);
		break;
	case 2:	dfs(v,n);
		break;
	case 3:	exit(0);
	default:printf("\nWrong choice");
	}
}
}

void push(int item)
{
if(top==20)
printf("\nStack Overflow ");
else
st[++top]=item;
}

int pop()
{
if(top==0)
{
printf("\nEmpty Stack");
return(0);
}
else
return st[top--];
}


void dfs(int v,int n)
{
int u;
	push(v);
	while(top!=0)
	{
	u=pop();
	
