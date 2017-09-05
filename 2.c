#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=3;i<6;i++){
		for(j=6;j>i;j--)printf(" ");
		for(k=0;k<2*i-5;k++)printf("*");
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(k=1;k<=i;k++)printf(" ");
		for(j=0;j<7-i*2;j++)printf("*");
		printf("\n");
	}
	return 0;
 } 
