#include<stdio.h>
#include <math.h>

int isPrime(int x)

{
	int ret = 1;
	int i;
	if (x == 1||
	    (x%2 == 0 && x!=2))
	    ret = 0;
	for (i=3;i<sqrt(x);i+=2){
		if(x%i == 0){
			ret = 0;
			break;
		}
	}
    return ret;
	
}

int main(int argc,const char* argv[])
{
	int j;
	j=0;
	printf("Please input a number:");
	scanf("%d",&j);
	isPrime(j);
	if(isPrime(j))
	{
	 printf("%d是素数",j);
	}
	else printf("%d不是素数",j);
	return 0;
}


