#include<stdio.h>
int main()
{
	int m,i;
	scanf("%d",&m);
	int arr[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	oddrep(arr,m);
}
int oddrep(int a[],int n)
{
	int i,count,j;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count%2==1)
		printf("%d ",a[i]);
	}
}
