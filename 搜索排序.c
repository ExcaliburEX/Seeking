#include<stdio.h>

int max(int a[],int len)
{
	int maxid= 0;
	int i;
	for	(i=1;i<len;i++)
	{
		if(a[i]>a[maxid])
		{
			maxid=i;
		}
	}
	return maxid;
}

int main()
{
	int a[]={2,5,1,56,15,75,34,47,59};
	int len=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=len-1;i>0;i--)
	{
		int maxid=max(a,i+1);
		int t=a[maxid];
		a[maxid]=a[i];
		a[i]=t;
	}
	
	for(i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
