#include<stdio.h>

int main()
{
	char c;
	while((c=getchar())!='\n'){
		if(c>='a'&&c<='z')c=c-'a'+'A';
		putchar(c);
	}
	putchar('\n')
}
