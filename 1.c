#include<stdio.h>
//1-3+5-7+9...+101=?
int main()
{
	int s=-1,n=1,t=1,sum=0;
	for(n=1;n<=101;n+=2)
	{
		s=-s;
		t=s*n;
		sum+=t;
		printf("t=%3d   sum=%3d\n",t,sum);
	}
	printf("sum=%d\n",sum);
	
	return 0;
 } 
