#include<stdio.h>

int main()
{
	char ch;
	int n=0;
	while((ch=getchar())!='\n')
	{
		if(ch>='0'&&ch<='9'){
		n=n*10+ch-'0';
		printf("%d\n",n);
		}
	}
	return 0;
	
}
